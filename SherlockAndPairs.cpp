/*
Problem Statement

Sherlock is given an array of N integers A0, A1 ... AN-1 by Watson. Now Watson asks Sherlock that how many different pairs of indices i and j exist such that i is not equal to j but Ai is equal to Aj.

That is, Sherlock has to count total number of pairs of indices (i, j) where Ai = Aj AND i ≠ j.

Input Format 
First line contains T, the number of testcases. T test case follows. 
Each testcase consists of two lines, first line contains an integer N, size of array. 
Next line contains N space separated integers.

Output Format 
For each testcase, print the required answer in different line.

Constraints 
1 ≤ T ≤ 10 
1 ≤ N ≤ 105 
1 ≤ A[i] ≤ 106

Sample input

2
3
1 2 3
3
1 1 2
Sample output

0
2
Explanation 
In the first testcase, no two pair of indices exist which satisfy the given property. 
In second testcase as A[0] = A[1] = 1, the pairs of indices (0,1) and (1,0) satisfy the given property.
*/

#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int T;
    cin>>T;
    
    while(T--)
    {
        long n;
        map<long,long> mapCount;
        cin>>n;
        
        for(int i = 0 ; i < n; i++)
        {
            long k;
            cin>>k;
            long &count = mapCount[k];
            count++;
        }
        
        long long nTotalPairs = 0;
        
        map<long,long>::const_iterator itr;
        for(itr = mapCount.begin(); itr != mapCount.end(); itr++)
        {
            long nCount = itr->second;
            if(nCount > 1)
                nTotalPairs += (nCount * (nCount - 1));   
        }
        cout<<nTotalPairs<<endl;
    }
    return 0;
}

