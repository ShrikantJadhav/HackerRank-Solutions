#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        int M,N;
        int *in;
        int *pos;
        
        cin>>M;
        cin>>N;
        in = new int[N];
        pos = new int[N];
        
        for(int i = 0 ; i < N; ++i){
            cin>>in[i];
            pos[i] = in[i];
        }
        
        sort(in, in+N);
        
        int s = 0;
        int e = N - 1;
        while(s != e){
            if(in[s] + in[e] == M)
                break;
            
            if(in[s] + in[e] > M)
                e--;
            else
                s++;
        }
        
        int i = 0;
        while(i < N && pos[i] != in[s])
            i++;
        
        int first = i + 1;
        
        i = N - 1;
        while(i >=0  && pos[i] != in[e])
            i--;
        
        if(first < i + 1)
            cout<<first << " " <<i+1<<endl;
        else
            cout<<i+1<< " " <<first<<endl;
    }
    return 0;
}

