/*
Little Bob loves chocolates and goes to the store with a $N bill with $C being the price of each chocolate. 
In addition, the store offers a discount: for every M wrappers he gives the store, he’ll get one chocolate for free. 
How many chocolates does Bob get to eat?

Input Format:
The first line contains the number of test cases T (<=1000). 
Each of the next T lines contains three integers N, C and M

Output Format:
Print the total number of chocolates Bob eats.
*/

#include <iostream>
using namespace std;


int main() {
    int C,N,M,T;
    int nCurWrappers,nTotalChocs;
    
    std::cin>>T;
    
    while(T-- > 0){
        std::cin>>N;
        std::cin>>C;
        std::cin>>M;
        
        nTotalChocs = N / C; //Total chocs bought in initial amount
        nCurWrappers = nTotalChocs;
        
        while(nCurWrappers >= M){
            nCurWrappers++;
            nTotalChocs++;
            nCurWrappers -= M;
        }
        std::cout<<nTotalChocs<<std::endl;
    }
    return 0;
}
