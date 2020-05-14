#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define pii pair<int,int>
#define F first
#define S second

bool cmp(pii a,pii b)
{
	return (a.S<=b.S);
}

vector<vector<int>> solve(vector<pii>A, vector<pii>B,int k)
{
	sort(A.begin(),A.end(),cmp);
	sort(B.begin(),B.end(),cmp);

	int n = A.size(), m = B.size();

	int i=0, j=m-1;

	map<int,vector<pii>> mp;

	int ans = INT_MIN;
	int tmp;
	while(i<n && j>=0)
	{
		tmp = A[i].S + B[j].S;
		if(tmp<k)
		{
			ans = max(ans,tmp);
			mp[ans].push_back({i,j});
			i++;
		}
		else if(tmp>k)
			j--;
		else if(tmp==k)
		{
			ans = k;
			mp[ans].push_back({i,j});
			i++;
			j--;
		}
	}

	vector<vector<int>> vec;
	vector<int> v(2);

	auto it = mp.find(ans);
	vector<pii> ok = it->second;
	for(int i=0;i<ok.size();i++)
	{
		v[0] = ok[i].F;
		v[1] = ok[i].S;
		vec.push_back(v);
	}

	return vec;
}

int main()
{
	ONLINE_JUDGE
	int n,m;
	cin>>n>>m;
	vector<pii>a,b;

	// pair<int,int> v;
	int c,d;
	for(int i=0;i<n;i++)
	{
		cin>>c>>d;
		a.push_back({c,d});
	}

	for(int i=0;i<m;i++)
	{
		cin>>c>>d;
		b.push_back({c,d});
	}

	int k;
	cin>>k;
	vector<vector<int>> ans = solve(a,b,k);

	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
	}

}

