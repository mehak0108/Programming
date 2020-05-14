#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    //cin>>t;
    //while(t--){
        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        string a,b;
        cin>>a>>b;
        ll ct=a.size()+b.size();
        while(a.size() && b.size() && a.back()==b.back()){
            ct = ct -2;
            a.pop_back();
            b.pop_back();
        }
        cout<<ct;
        return 0;
    //}
}
