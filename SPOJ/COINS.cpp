#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX         1000000000
#define ll          long long
#define ld          long double
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define lol         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;
map<ll,ll> dp;

void MOD(ll &x)
{
    if (x >= lol) x -= lol;
    if (x < 0) x += lol;
}


ll solve(ll n)

{
    // dp[0]=0LL;
    // dp[1] = 1LL;

    // for(int i=2;i<=MAX;i++)
    // {
    //     dp[i] = max(i*1LL,dp[i/2]+dp[i/3]+dp[i/4]);
    // }
    if(n==0) return dp[0]=0;
    // if(n==1) return dp[1] = 1;

    if(dp[n]!=0) return dp[n];
    dp[n] = max(n,solve(n/2)+solve(n/3)+solve(n/4));

    return dp[n];

}


int main()
{
    // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    // int t=1;
//  cin>>t;
    // ll ans = solve(MAX);
    // scanf("%lld", &n)==1
    while(cin>>n){
        printf("%lld\n",solve(n));
    }
    return 0;
}