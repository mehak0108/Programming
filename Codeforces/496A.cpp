#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    //cin>>t;
    //while(t--){
        int n,a[1001],ct=0;
        vector<int>v;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
                ct++;
            
        }
        for(int i=0;i<n-1;i++){
            if(a[i+1]==1)
                v.push_back(a[i]);
        }
        //if(a[n-1]!=1)
            v.push_back(a[n-1]);
        cout<<ct<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    //}
}
