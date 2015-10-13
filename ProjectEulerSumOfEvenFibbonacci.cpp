#include<iostream>
#include<cstdint>

using namespace std;

int main()
{
    uint64_t T;
    cin>>T;
    uint64_t f2 = 2;
    uint64_t f1 = 8;


    while( T > 0)
    {
        uint64_t nMax;
        uint64_t nSum = 0;
        cin>>nMax;

        if( nMax >= 2)
            nSum += 2;

        if( nMax >= 8)
            nSum += 8;

        while( f1 < nMax )
        {
            uint64_t s = (f1 * 4) + f2;
            if( s > nMax) break;
            f2 = f1;
            f1 = s;
            nSum += s;
        }

        cout<<nSum<<endl;
        --T;
    }
    return 0;
}
