#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,ct=0;
        cin>>n;
        ll a[100010];
        unordered_map<ll,ll> m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            ll b = it->second;
            ll a = it->first;
            if(a>n)
                ct = ct+b;
            else{
                if(b!=1)
                    ct=ct+(b-1);
            }
            
        }
        cout<<ct<<endl;
    }
}