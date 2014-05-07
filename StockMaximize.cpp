#include<iostream>

using namespace std;

int main()
{
	unsigned int T;
	unsigned int *p;
    unsigned int max = 0;
	unsigned long long totalProfit;

	cin>>T;
	while(T > 0)
	{
		unsigned int N;
		cin >> N;

		if(N == 0 || N == 1) {
			cout<<"0"<<"\n";
			return 0;
		}

		p = new unsigned int[N];
		
		for(int i = 0 ; i < N;i++)
		{
			cin>>p[i];
		}

        max = p[N-1];
		for(int i = N-1; i >= 0; i--)
		{
              if(p[i] > max){
                  max = p[i];
              }
            
            totalProfit += (max - p[i]);
		}

		std::cout<<totalProfit<<std::endl;
		delete[] p;
        totalProfit = 0;
		T--;
	}
}
