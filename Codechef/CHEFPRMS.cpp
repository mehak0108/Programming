#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,n,a[100010];
    cin>>t;
    while(t--){
        ll ct=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll sum=a[0];
        for(int i=1;i<n;i++){
            ct++; 
            //sum+=a[i];
            if(sum>=n){
                break;
            }

            //sum=sum*2;
        
            for(int j=i+1;j<=i+a[i];j++){
                sum += a[j];
            }
            /*if(sum>=n){
                break;
            }*/
            sum+=a[i];
            //ct++;
            
        }
        cout<<ct<<endl;
    }

}
