/*
Problem Statement

Sansa has an array. She wants to find the value obtained by XOR-ing the contiguous subarrays, followed by XOR-ing the values thus obtained. Can you help her in this task?

Note : [1,2,3] is contiguous subarray of [1,2,3,4] while [1,2,4] is not.

Input Format 
First line contains an integer T, number of the test cases. 
The first line of each test case contains an integer N, number of elements in the array. 
The second line of each test case contains N integers that are elements of the array.

Output Format 
Print the answer corresponding to each test case in a seperate line.

Sample Input

1
3
1 2 3
Sample Output
2

Explanation
1 ⊕ 2 ⊕ 3⊕ (1⊕ 2)⊕ (2⊕ 3)⊕ (1⊕ 2⊕ 3) = 2

*/


#include <iostream>
using namespace std;


int main() {
    int T;
    cin>>T;
    
    while(T > 0)
    {
        long int n;
        long int result = 0;
        cin>>n;
        long int *arr = new long int[n+1];
        
        for(int i = 1 ; i <= n ; i++)
        {
            cin>>arr[i];
            
            if(((i * (n-1-i)) % 2) != 0)
                result ^=arr[i];    
        }
        cout<<result<<"\n";
        T = T - 1;
        delete[] arr;
    }
    return 0;
}

