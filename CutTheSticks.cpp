#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int *a = new int[1000];
    
    for(int i=1;i <= n;i++){
        int k;
        cin>>k;
        a[k]++;
    }
    
    int count = n;
    cout<<count<<endl;
    for(int i = 1; ; i++){
        if(a[i] != 0){
            count = count-a[i];
            if(count > 0)
                cout<<count<<endl;
            else
                break;
        }
    }
    
    delete[] a;
}
