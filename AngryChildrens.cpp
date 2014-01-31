/*Bill Gates is on one of his philanthropic journeys to a village in Utopia. 
He has N packets of candies and would like to distribute one packet to each of the K children in the village (each packet may contain different number of candies). To avoid a fight between the children,
he would like to pick K out of N packets such that the unfairness is minimized.

Suppose the K packets have (x1, x2, x3,….xk) candies in them, where xi denotes the number of candies in the ith packet, 
then we define unfairness as

max(x1,x2,…xk) - min(x1,x2,…xk)

where max denotes the highest value amongst the elements and min denotes the least value amongst the elements. 
Can you figure out the minimum unfairness and print it? */

#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int calcMinUnfair(vector<int> &v1,int k){
    sort(v1.begin(),v1.end());
    int minUnfair = INT_MAX, max = 0, min = 0;
    int size = v1.size();
 
    for(int i=0;i< size - k;i++){
        max = v1[i+k-1];
        min = v1[i];
        int diff = max - min;
        if(diff <= minUnfair)
            minUnfair = diff;
    }
    return minUnfair;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,K;
    vector<int> v1;
    std::cin>>N;
    std::cin>>K;
    while(N-- >0){
        int temp;
        std::cin>>temp;
        v1.push_back(temp);
    }
    std::cout<<calcMinUnfair(v1,K);
    return 0;
}
