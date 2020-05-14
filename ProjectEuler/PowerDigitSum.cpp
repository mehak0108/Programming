#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    ll res=0;
    vector<ll> v;

    for(int i=1;i<=n;i++){
        ans1 = ans1*2;
    }
    ll ans1 = pow(2,n);
    ll ans = pow(ans1,20);

    while(ans!=0){
        int r = ans%10;
        res = res + r;
        ans=ans/10;
    }

    cout<<res;
}
