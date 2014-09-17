#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Target{
	public:	
		vector<string> m_vect;
		vector<string> draw(int n);
};

vector<string> Target::draw(int n){
	char m[n][n];
	
	for(int i = 0 ; i < n; i++){
		for(int j =0 ; j < n; j++){
			m[i][j] = ' ';
		}
	}
	//initialize first and last row/column by 1
	for(int i=0; i < n; ++i){
		m[i][0] = '#';
		m[0][i] = '#';
		m[i][n-1] = '#';
		m[n-1][i] = '#';
	}
	
	for(int i = 1; i <= n/2+1 ; i++){
		if( (i & 1) == 0){
			m[i][i] = '#';
			int k = i;
			while(k < n - i){
				m[k][i] = '#';
				m[k][n-i-1] = '#';
				m[i][k] = '#';
				k++;
			}
		}
	}
	
			
	for(int i = 0 ; i < n/2+1 ; i++){
		string row;
		for(int j = 0 ; j < n; j++){
			row += m[i][j];
		}
		m_vect.push_back(row);
	}		
	int nSize = m_vect.size();
	
	for(int i = nSize - 2 ; i >= 0; --i){
		m_vect.push_back(m_vect[i]);
	}
	
	return m_vect;
}


int main()
{
	Target t;
	vector<string> a = t.draw(25);
	
	for(int i = 0 ; i < a.size(); i++)
		cout<<a[i]<<endl;
	return 0;
}
