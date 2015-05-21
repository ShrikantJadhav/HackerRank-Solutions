#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    int T;
    cin>>T;
    
    while(T > 0)
    {
        string s;
        cin>>s;
        
        bool bFlag = true;
        size_t n = s.length();
        
        size_t left = 0;
        size_t right = n - 1;
        
        while((left < n-1) && (right > 0))
        {
            if(abs(static_cast<int>((s[left+1] - '0') - (s[left] - '0'))) !=
               abs(static_cast<int>((s[right-1]- '0') - (s[right] - '0'))))
            {
                bFlag = false;
                break;
            }
            left++;
            right--;
        }
        if(bFlag)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
        
        T--;
    }
    return 0;
}
