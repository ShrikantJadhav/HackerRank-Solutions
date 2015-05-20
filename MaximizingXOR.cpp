#include <cmath>
#include <iostream>

using namespace std;

int maxXor(int l, int r) {
	int nBitCount = 0;
	int p = l ^ r;
    while( p > 0 )
    {
    	p = p >> 1;
    	++nBitCount;
    }
    
    return (pow(2,nBitCount) - 1);
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res<<"\n";
    
    return 0;
}
