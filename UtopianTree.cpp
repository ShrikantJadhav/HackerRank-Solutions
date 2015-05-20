#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int length[60] = {1};

int main() {
  short T;
  cin>>T;

  short *N = new short[T]();
  short i = 0;
  short nMax = 0;

  while( i < T ){
      cin>>N[i];
      if(N[i] > nMax)
        nMax = N[i];
      i++;
  }

  for(i = 1 ; i <= nMax; i++){
        if(i%2 != 0){
                length[i] = length[i-1] * 2;
        }
        else
        {
                length[i] = length[i-1] + 1;
        }
  }

  for( i = 0; i < T;i++)
        cout<<length[N[i]]<<"\n";

  delete[] N;
  return 0;
}

