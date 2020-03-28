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

string addString(string A,string B)
{
	int n = A.length();
	int m = B.length();

	int carry = 0;
	int val,res;
	string ans;
	for(int i=0;i<max(n,m);i++)
	{
		val = ((i<n)?A[i]-'0':0)+((i<m)?B[i]-'0':0)+carry;
		res = val%10;
		carry = val/10;
		ans.pb(res+'0');
	}
	if(carry) ans.pb(carry+'0');

	reverse(all(ans));
	return ans;
}

string diffString(string A,string B)
{
	int n = A.length();
	int m = B.length();

	// bool fl = false;
	int val,res;
	string ans;
	for(int i=0;i<n;i++)
	{
		if(i<m)
		{
			if(A[i]>=B[i])
			{
				int p = A[i]- B[i];
				// cout<<p<<endl<<endl; 
				ans.pb(p+'0');
			}
			else
			{
				int tmp = 10 + (A[i]-'0');
				int p = tmp - (B[i]-'0');
				// cout<<p<<endl<<endl;

				ans.pb(p+'0');

				if(i<n-1)
				{
					if(A[i+1]!='0')
						A[i+1] = A[i+1]-1;
					else
					{
						int j=i+1;
						while(j<n && A[j]=='0')
						{
							A[j] = '9';
							j++;
						}
						if(j<n)
							A[j] = A[j]-1;
					}
				}
			}
		}
		else
		{
			// if(A[i]=='0' && i==n-1)
			// {
			// 	continue;
			// }
			// else
			ans.pb(A[i]);
		}
	}

	reverse(ans.begin(),ans.end());
	int j = 0; 
    while (ans[j] == '0') 
       j++; 
   if(j!=ans.length())
    	ans.erase(0, j);
    else
    	ans = "0";
	return ans;
}

string divide(string A)
{
	int n = A.length();

	string ans;
	int val,rem=0,p;
	for(int i=0;i<n;i++)
	{
		
		p = A[i]-'0';
		if(rem==0)
		{
			val = p/2;
			rem = p%2;
		}
		else
		{
			val = (10*rem+p)/2;
			rem = (10*rem+p)%2;
		}
		
		ans.pb(val+'0');
	}

	int j = 0; 
    while (ans[j] == '0') 
       j++; 
   if(j!=ans.length())
    	ans.erase(0, j);
    else
    	ans = "0";
	return ans;
}

void solve()
{
	string tot,diff;
	string kla,nau;

	cin>>tot>>diff;

	reverse(tot.begin(),tot.end());
	reverse(diff.begin(),diff.end());

	string sum = addString(tot,diff);
	string minus = diffString(tot,diff);

	string divsum = divide(sum);
	string divminus = divide(minus);

	cout<<divsum<<endl<<divminus<<endl;

}


int main()
{
	ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=10;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

/*
input
491
55
16
8
45
16
555
555
999
1
114
6
2003
65
1000
998
9999
99
*/

/*
output
273
218
12
4
30
14
555
0
500
499
60
54
1034
969
999
1
5049
4950
0
0
*/