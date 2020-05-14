#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000010 

int main(){
    ll q,n,b,x,y;
    cin>>n>>q;
    /*ll a[n][n];
    ll c = ceil(pow(n,2)/2);
    ll p=1;

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if((i+j)%2 == 0){
                a[i][j] = p;
                p++;
            }
            else{
                a[i][j] = c+1;
                c++;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
/*
    ll x,y;
    while(q--){
        cin>>x>>y;
        if(n%2 == 0){
            if((x+y)%2==0){
                b = n/2*x - (n-y)/2;
            }
            else{
                b = n/2*x - (n-y)/2 + pow(n,2)/2;
            }
        }
        else{
            if((x+y)%2==0){
                b = (n+1)/2*x - (n-y+1)/2 -1;
            }
            else{
                b = (n+1)/2*x - (n-y+1)/2 + pow(n,2)/2;
            }
        }
        cout<<b<<endl;
    }*/
    while(q--){
        cin>>x>>y;
        long long ans;
        if ((x + y) % 2 == 0) {
            ans = 1ll * (x - 1) * n + y;
            ans = (ans + 1) / 2;
        }
        else {
            ans = 1ll * (x - 1) * n + y;
            ans = (ans + 1) / 2;
            ans += (1ll * n * n + 1) / 2;
        }
        /*printf("%I64d\n", ans);*/
        cout<<ans<<endl;
    }
    
}

