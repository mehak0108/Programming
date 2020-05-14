#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    //cin>>t;
    //while(t--){
        ll n,a[120009],ct=0;
        map<ll,ll> m;
        map<ll,ll>:: iterator it;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }

        for(int i=0;i<n;i++){
            bool flag = false;
            m[a[i]]--;
            for(int j=1;j<=32;j++){
                it = m.find((1<<j)-a[i]);
                if(it!=m.end() && it->second>0){
                    flag = true;
                }
            }
            if(!flag)
                ct++;
            m[a[i]]++;
        }
        cout<<ct<<endl;
    //}
}
