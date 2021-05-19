#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("../input","r",stdin); freopen("../output","w",stdout);
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
#define M         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= M) x -= M;
	if (x < 0) x += M;
}


// void solve()
// {
//     string s;
//     cin>>s;

//     int n = s.length();
//     if(n<7)
//         cout<<"NO";
//     else
//     {
//         bool dang = false;
//         for(int i=0;i<n;i++)
//         {
//             char val = s[i];
//             int j;
//             for(j=i+1;j<i+7;j++)
//             {
//                 if(j<n)
//                 {
//                     if(s[j]!=s[i])
//                         break;
//                 }
//                 else
//                     break;
//             }
//             if(j==i+7)
//             {
//                 dang = true;
//                 break;
//             }   
//         }
//         if(dang) cout<<"YES";
//         else cout<<"NO";
        
//     }
// }
void solve()
{
    string s;
    cin>>s;

    int n = s.length();
    if(n<7)
        cout<<"NO";
    else
    {
        char val = s[0];
        int l=1;
        int max_l=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]==val)
                l++;
            else
            {
                l=1;
                val = s[i];
            }
            max_l = max(max_l,l);
        }
        if(max_l>=7) cout<<"YES";
        else cout<<"NO";
    }
}

int main()
{
	// ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}