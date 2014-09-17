#include<iostream>
#include<string>
#include<vector>

using namespace std;

class BinaryCode{
private:
	vector<string> m_vecDecode;
public:
	vector<string> decode(string strEncoded);
	void printVector();
};

vector<string> BinaryCode::decode(string strEncoded){
	m_vecDecode.clear();
	
	for(int k = 0 ; k <=1 ; k++)
	{
		int prev = k;
		int next = 0;
	
		string strOut = "";
		strOut += (k + 48);
		for(int i = 0 ; i < strEncoded.size()-1;i++){
			int n = (strEncoded[i] - '0') - prev - next;
		
			if(n < 0)
				n = n * -1;
		
			if( n >= 2){
				strOut = "NONE";
				break;
			}
			
			next = prev;
			prev = n;
			strOut += prev + '0';
		}
		m_vecDecode.push_back(strOut);
	}
	return m_vecDecode;
}

void BinaryCode::printVector()
{
	for(int i = 0 ; i < m_vecDecode.size();i++)
		cout<<m_vecDecode[i]<<endl ;
}

int main()
{
	BinaryCode bc;
	bc.decode("123210122");
	bc.printVector();
	
	bc.decode("11");
	bc.printVector();
	
	
	bc.decode("12");
	bc.printVector();
}
