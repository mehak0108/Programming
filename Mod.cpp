#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
#define F first
#define S second
#define ONLINE_JUDGE freopen("input","r",stdin); freopen("output","w",stdout);
#define M 1000000007
#define pb(x) push_back(x)
#define N 100001
#define endl "\n"

void MOD(ll &x)
{
    if (x >= M) x -= M;
    if (x < 0) x += M;
}

ll func(ll a, ll x)
{
    ll m=64;
    ll y=x%m;
    ll val = (y*a)%m;
    return val;
}

int main()
{
    ONLINE_JUDGE
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(ll i=1; i<=2; i++)
    {
        // cout<<func(i,2010)<<endl;
        // cout<<func(i,2013)<<endl;
        // cout<<func(i,2007)<<endl;
        cout<<func(i,2015)<<endl;        
    }
}