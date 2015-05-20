#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,div=0;
        int j = 0;
        
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> j;
            div = gcd(div,j);
        }
        
        if(div == 1)
            cout << "YES";
        else 
            cout << "NO";
        
        cout<<endl;
    }
    return 0;
}
