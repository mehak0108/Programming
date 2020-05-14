#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    ll ans;
    double x,y;
    x = (double)n/a;
    y = (double)m/a;
    ans = ceil(x)*ceil(y);
    cout<<ans<<endl;
}
