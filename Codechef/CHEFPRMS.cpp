#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,n,a[100010];
    cin>>t;
    while(t--){
        ll ct=0,r=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                r += a[i];
            }
            if(r>=(n-r))
                break;
            ct++; 
            
        }
        cout<<ct<<endl;
    }

}
