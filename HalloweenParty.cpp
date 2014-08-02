#include<iostream>
#include<string>
#include<cstdint>

using namespace std;

int main()
{
    short T;
    cin>>T;
    while( T > 0)
    {
        uint64_t nCut;
        cin>>nCut;
        
        uint64_t nTemp = nCut / 2;
        cout << nTemp * (nCut - nTemp)<<endl;
        --T;    
    }
	return 0;
}

