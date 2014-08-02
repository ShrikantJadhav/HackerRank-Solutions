#include<iostream>
#include<cstdint>
#include<cmath>

using namespace std;

int main()
{
    uint64_t T;
    cin>>T;
    while(T > 0)
    {
        uint64_t N;
        cin>>N;

        uint64_t nr = floor((N - 1)/3);
        uint64_t sum = 3* (nr * (nr+1) / 2);
        nr = floor((N -1)/5);
        sum += 5 * (nr * (nr +1)/2);
        nr = floor((N - 1) /15);
        sum -= 15 * (nr *(nr+1)/2);
        cout<<sum<<"\n";
        --T;
    }
	return 0;
}

