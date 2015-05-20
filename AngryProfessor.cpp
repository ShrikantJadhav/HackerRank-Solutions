#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    
    while(T)
    {
        int n,k;
        int count = 0;
        cin>>n;
        cin>>k;
        
        for(int i = 0; i < n; i++)
        {
            int tm;
            cin>>tm;
            if(tm<=0)
               count++;
        }
        
        if(count>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        --T;
    }
    return 0;
}
