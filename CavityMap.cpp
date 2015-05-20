#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<char> arr;
    vector<int> vect;
    
    for(int i = 0 ; i < n*n; i++)
    {
        char ch;
        cin>>ch;
        arr.push_back(ch);
    }
    
    for(int i = n+1 ; i < n*(n-1) - 1; i++)
    {
        if(i % n == 0 || (i+1)%n == 0)
            continue;
        
        if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) && (arr[i] > arr[i-n] && arr[i] > arr[i+n]))
            vect.push_back(i);
    }
    
    for(vector<int>::iterator it1 = vect.begin(); it1 != vect.end(); ++it1)
        arr[*it1] = 'X';
    
    for(int i = 0 ; i < n*n; i++)
    {
            cout<<arr[i];	
            if( (i+1)%n == 0) 
            	cout<<endl;
    }
}
