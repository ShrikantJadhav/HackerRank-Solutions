#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

void printAllDivisibleDigits(uint64_t n)
{
    uint64_t nTemp = n;
    int count = 0;
    
    while(nTemp > 0)
    {
        int nDigit = nTemp%10;
        if(nDigit != 0 && n % nDigit == 0)
            count++;
        nTemp = nTemp/10;
    }
    cout<<count<<endl;
}

int main()
{
    short T;
    cin>>T;
    
    while(T > 0)
    {
        uint64_t n = 0;
        cin>>n;
        printAllDivisibleDigits(n);
        --T;
    }
}
