#include<iostream>
#include<cmath>

using namespace std;

char **table;
int **len;
int N = 0;

void getElement(int i,int j,int &result)
{
	if(i < 0 || j < 0 ||  i > N-1 || j > N-1)
		return;
	else
		if(len[i][j] == -1)
			return;
		else
			if(len[i][j] < result)
				result = len[i][j];
}

void dfs(int i, int j,int result)
{
	if(i < 0 || j < 0 ||  i > N-1 || j > N-1 || table[i][j] == 'T' || table[i][j] == 'E')
			return;


    getElement(i-1,j,result);
    getElement(i,j-1,result);
    getElement(i,j+1,result);
    getElement(i+1,j,result);
	cout<<result<<"\t";
	
	if( len[i][j] != 999999 && abs(result - len[i][j]) <= 1)
		return;


	len[i][j] = result + 1;


	dfs(i-1,j,len[i][j] + 1);
	dfs(i,j-1,len[i][j] + 1);
	dfs(i, j+1,len[i][j] + 1);
	dfs(i+1,j,len[i][j] + 1);
}

int main()
{
	cin>>N;

	table = new char*[N];
	len = new int*[N];

	for(int i = 0 ; i < N;i++)
	{
		table[i] = new char[N];
		len[i] = new int[N];
	}
	
	int starti,startj,endi,endj;

	for(int i = 0 ; i < N;i++)
        for(int j = 0 ; j < N; j++)
			len[i][j] = 999999;

 	 for(int i = 0 ; i < N;i++)
		for(int j = 0 ; j < N; j++)
		{
			cin>>table[i][j];	
			if(table[i][j] == 'S')
			{
				starti = i;
				startj = j;
			}
			
			if(table[i][j] == 'E')
			{
				endi = i;
				endj = j;
			}
		}

	int temp =0;
	dfs(starti,startj,temp);

	for(int i = 0 ; i < N ;i++)
     {
        for(int j = 0 ; j < N; j++)
        {
        cout<<table[i][j] <<"\t";
        }
        cout<<"\n";
    }


	 for(int i = 0 ; i < N;i++)
	 {
        for(int j = 0 ; j < N; j++)
		{
		cout<<len[i][j] <<"\t";
		}
		cout<<"\n";
	}


	int result = 999999;
	getElement(endi-1,endj,result);
	getElement(endi,endj-1,result);
	getElement(endi+1,endj,result);
	getElement(endi,endj+1,result);

	cout<<result;

	for(short i = 0; i < N; ++i){
    	delete[] table[i];
        delete[] len[i];
    }
  	delete[] table;
  	delete[] len;
	return 0;
}
