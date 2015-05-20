#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    short T;
    cin>>T;
    cin.ignore();
    while( T > 0)
    {
        string str;
        getline(cin,str);
        int nLen = str.length();
        int count = 0;
        
        for(int i = 0 ; i < nLen/2 ; i++)
        {
            short nLeft = static_cast<int>(str[i]);
            short nRight = static_cast<int>(str[nLen-1-i]);
            count+= abs(nRight - nLeft);
        }
        
        cout<<count<<endl;
        --T;    
    }
}
