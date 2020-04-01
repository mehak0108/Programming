#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int t;
	// cin>>t;
	// // t=1;
	// while(t--)
	// {
		int n,k;
		cin>>n>>k;
		// n = 5;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		unordered_set<int>us;
		queue<int>q;
		for(int i=0;i<n;i++)
		{
			if(q.size()<k && us.find(a[i])==us.end())
			{
				q.push(a[i]);
				us.insert(a[i]);
				// cout<<a[i]<" ";
			}
			else if(q.size()>=k &&  us.find(a[i])==us.end())
			{
				int tp = q.front();
				q.pop();
				us.erase(tp);
				q.push(a[i]);
				us.insert(a[i]);
				// cout<<a[i<<" ";
			}
		}

		vector<int> v;
		while(!q.empty())
		{
			v.push_back(q.front());
			q.pop();
		}

		reverse(v.begin(),v.end());

		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		// cout<<endl;
	// }
}