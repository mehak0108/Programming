#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s,org;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			s.push_back(p+'0');
			org.push_back(i+1+'0');
		}
		// cout<<s<<endl;
		string nor ="" , rev="" ;

		nor = org+org;
		// cout<<nor<<endl;
		reverse(org.begin(),org.end());

		rev = org+org;
		// cout<<rev<<endl;
		if(nor.find(s)!=string::npos || rev.find(s)!=string::npos)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;



	}
}
