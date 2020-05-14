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
		vector<int> v(410,0);
		for(int i=0;i<4*n;i++) cin>>v[i];

		map<int,int> m;
		for(int i=0;i<4*n;i++)
			m[v[i]]++;

		v.clear();
		bool t=false;
		for(auto it=m.begin();it!=m.end();it++)
		{
			if(it->second%2!=0)
			{
				t = true;
				break;
			}
			int b = it->second/2;

			for(int i=1;i<=b;i++)
				v.push_back(it->first);
		}
		
		// for(int i=0;i<v.size();i++)
		// 	cout<<v[i]<<" ";

		int siz = v.size();
		if(t)
			cout<<"NO"<<endl;
		else
		if(siz == 1 || siz==2)
			cout<<"YES"<<endl;
		else 
		{
			bool fl=false;
			long long prd = v[0]*v[siz-1];
			int l=1,r=siz-2;
			while(l<r)
			{
				long long tmp = v[l]*v[r];
				if(tmp!=prd)
				{
					fl = true;
					break;
				}

				l++;r--;
			}
			if(fl)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}

	}
}
