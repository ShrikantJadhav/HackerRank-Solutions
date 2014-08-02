#include <iostream>

using namespace std;

int main()
{
	int fact[200] = {0};
	int T;
	cin>>T;
	
	while(T > 0)
	{
		int num;
		cin>>num;
		
		int temp = num;
		
		//represent a number in array
		int i = 0;
		while(num != 0)
		{
			fact[i] = num%10;
			num = num/10;
			i++;
		}

		int carry = 0;
		while(temp > 1)
		{
			i = 0;
			while(i < 200)
			{
				int result = fact[i] * (temp - 1) + carry;
				fact[i] = result %10; //last digit of multiplication
				carry = result / 10;
				i++;
			}
			temp--;
		}
		
		bool bPrint = false;
		for(i = 199; i >= 0; i--)
		{
			if(fact[i] != 0)
				bPrint = true;

			if(bPrint)
				cout<<fact[i];
		}
        cout<<endl;
		T--;
	}
	return 0;
}

