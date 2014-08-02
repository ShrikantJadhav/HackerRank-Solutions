#include<iostream>
#include<string>
#include<cstdint>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    uint64_t T;
    cin>>T;
    vector<uint64_t> mVector;
    mVector.push_back(0);
    mVector.push_back(2);
    mVector.push_back(8);
    
    while( T > 0)
    {
        uint64_t nMax;
        uint64_t nSum = 0;
        cin>>nMax;
        
        uint64_t nSize = mVector.size();
        while(mVector[nSize-1] < nMax)
        {
        	mVector.push_back(mVector[nSize-1] * 4 + mVector[nSize-2]);
        	++nSize;
        }
        
        for(vector<uint64_t>::iterator itr = mVector.begin(); itr != mVector.end(); ++itr)
        {
            if(*itr > nMax)
               break;
        	nSum+= *itr;
        }
        cout<<nSum<<endl;
        --T;    
    }
	return 0;
}

