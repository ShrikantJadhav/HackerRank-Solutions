#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str1;
    string str2;
    
    int pos1[26];
    int pos2[26];
    
    for(int i=0; i < 26; i++)
        pos1[i] = pos2[i] = 0;
            
    cin>>str1;
    cin>>str2;
    int count = 0;
    for(int i = 0 ; i < str1.length(); ++i){
        int ind = str1[i] - 'a';
        pos1[ind]++;
    }
    
    for(int i = 0 ; i < str2.length(); ++i){
        int ind = str2[i] - 'a';
        pos2[ind]++;
    }
    
    for(int i = 0 ; i < 26; i++)
        count+= abs(pos1[i] - pos2[i]);
    
    cout<<count;
    return 0;
}

