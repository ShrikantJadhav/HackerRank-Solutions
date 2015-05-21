#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int GetRequiredDel(const string &strInput)
{
        const int n = strInput.length();
      
        if( n <= 1)
            return 0;
        
        int nDel = 0;
        char ch = strInput[0];
        for(int i = 1 ; i < n;i++ )
        {
            if(ch == strInput[i])
                nDel++;
            else
                ch = strInput[i];
        }
        return nDel;
}

int main() {
    int T;
    cin>>T;
    cin.ignore();
    while(T--)
    {
        string strInput;
        getline(cin,strInput);
        cout<<GetRequiredDel(strInput)<<endl;
    }
    return 0;
}
