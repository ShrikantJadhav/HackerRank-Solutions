#include<iostream>
#include<cstdint>

using namespace std;

int printStepsRequired(int64_t n){
	if( n == 1)
		return 0;
		
	int steps = 0;
	while(n != 1){
		if(n % 3 == 0){
			n = n/3;
			steps++;
			continue;
		}
		else{
			if(n % 2 == 0){
				n = n/2;
				steps++;
				continue;
			}
			else{
				n = n - 1;
				steps++;
			}
		}
	}
	return steps;
}

int main()
{
    short t;
    int64_t n;
    cin>>t;

    for(short i = 0 ; i< t;i++ ){
    	cin>>n;
    	cout<<printStepsRequired(n)<<"\n";
    }
    return 0;
}
    
