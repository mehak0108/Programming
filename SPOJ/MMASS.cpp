#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 		100001
#define ll          long long
#define ld          long double
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define lol         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}


void solve()
{
	string s;
	cin>>s;

	int n = s.length();
	unordered_map<char,int> mp;
	mp['C'] = 12;
	mp['H'] = 1;
	mp['O'] = 16;

	stack<int> st;
	int ans=0,glb=0;
	st.push(glb);
	rep(i,0,n)
	{
		if(mp.find(s[i])!=mp.end())
		{
			int vl = mp[s[i]]; 
			st.push(vl);

		}
		else if(i>0 && mp.find(s[i-1])!=mp.end() && isdigit(s[i]))
		{
			int vl = mp[s[i-1]]*(s[i]-'0'-1); 
			st.push(vl);
		}
		else if(i>0 && s[i-1]==')' && isdigit(s[i]))
		{ 
			
			int ok = st.top();
			st.pop();
			// cout<<s[i]-'0'<<" ";
			// cout<<ok<<" ";
			int vl = ok*(s[i]-'0'); 
			st.push(vl);
			// cout<<vl<<"  ";
		}
		else if(s[i]=='(')
		{
			st.push(-1);
		}
		else if(s[i]==')')
		{
			int sum=0;
			while(st.top()!=-1)
			{
				int vl = st.top();
				st.pop();
				sum+= vl;
			}
			st.pop();
			st.push(sum);
			// cout<<sum<<" ";
		}
	}

	while(!st.empty())
	{
		glb += st.top();
		st.pop();
	}

	cout<<glb<<endl;
}


int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}