#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100001

void util(string tmp,set<string>&vec,string s,int st,int n,int x,int y)
{
	if(x==y)
	{
		vec.insert(tmp);
	}

	if(x<0 || x>n || st>=s.length()) return;

	tmp.push_back(s[st]);
	if(s[st]=='l')
		util(tmp,vec,s,st+1,n,x-1,y);
	else
		util(tmp,vec,s,st+1,n,x+1,y);
	tmp.pop_back();

	util(tmp,vec,s,st+1,n,x,y);

}
int main()
{
	ONLINE_JUDGE
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n,x,y;

		cin>>n>>x>>y;

		set<string>vec;
		string tmp;

		util(tmp,vec,s,0,n,x,y);

		for(auto it=vec.begin();it!=vec.end();it++)
			cout<<(*it)<<endl;
		// for(int i=0;i<vec.size();i++)
		// 	cout<<vec[i]<<endl;
		cout<<vec.size()<<endl;
	}
}

/*
Input
2
rrlrlr
6
1
2
rrrlrr
7
0
0

Output
lrr
r
rlr
rlrlr
rrl
rrllr
rrlrl
7

rl
2

*/