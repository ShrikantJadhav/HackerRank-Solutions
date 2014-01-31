//There are N integers in an array A. All but one integer occurs in pairs. 
//Your task is to find out that number that occurs only once.

#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int lonelyinteger(vector < int > a) {
    if(a.size() == 0) return 0;
    if(a.size() == 1) return a[0];
    int number = a[0];
    for(int i =1 ; i < a.size();i++){
        number = number ^ a[i];        
    }
return number;

}

int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
