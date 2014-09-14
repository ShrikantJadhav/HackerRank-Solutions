#include<iostream>

using namespace std;

char table[5][5];
int len[5][5];

void getElement(int i,int j,int &result)
{
	if(i < 0 || j < 0 ||  i > 4 || j > 4)
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
	if(i < 0 || j < 0 ||  i > 4 || j > 4 || table[i][j] == 'T' || table[i][j] == 'E' || len[i][j] != 999999 )
			return;

    getElement(i-1,j,result);
    getElement(i,j-1,result);
    getElement(i,j+1,result);
    getElement(i+1,j,result);

	len[i][j] = result + 1;

	dfs(i-1,j,len[i][j] + 1);
	dfs(i,j-1,len[i][j] + 1);
	dfs(i, j+1,len[i][j] + 1);
	dfs(i+1,j,len[i][j] + 1);
}

int main()
{
	int starti,startj,endi,endj;

	for(int i = 0 ; i < 5;i++)
        for(int j = 0 ; j < 5; j++)
			len[i][j] = 999999;

	for(int i = 0 ; i < 5;i++)
		for(int j = 0 ; j < 5; j++)
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

	int temp  = 0;
	dfs(starti,startj,temp);

	for(int i = 0 ; i < 5;i++)
     {
        for(int j = 0 ; j < 5; j++)
        {
        cout<<table[i][j] <<"\t";
        }
        cout<<"\n";
    }


	 for(int i = 0 ; i < 5;i++)
	 {
        for(int j = 0 ; j < 5; j++)
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
	return 0;
}
