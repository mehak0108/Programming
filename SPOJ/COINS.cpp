#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n;
    while(cin>>n){
        if(n==0)
        ll a[n];

        memset(a,0,sizeof(a));
        for(ll i=1;i<=n;i++){
            a[i] = max(i,a[i/2]+a[i/3]+a[i/4]);
        }
        cout<<a[n]<<endl;
    }
    return 0;
}
