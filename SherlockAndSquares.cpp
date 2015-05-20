#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    
    while(T--){
        long long A,B;
        long count = 0;
        cin>>A>>B;
        
        long long s = sqrt(A);
        
        if( s*s != A)
            s = s+1;
        
        for(long long i = s; i * i <= B; i++){
            count++;
        }
        
        cout<<count<<endl;
    }
    return 0;
}
