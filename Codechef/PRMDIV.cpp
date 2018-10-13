#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sumPrime(ll n){
    ll sum=0,ct=0;
    for(ll i=2;i<=sqrt(n);i++){
        sum=0;
        if(n%i==0){
            ct=0;
            while(n%i==0){
                n=n/i;
                ct++;
            }
            sum= sum+(i*ct);
        }
    }
    if(n!=1)
        sum+=n;
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, a[1000010],ct=0,sp1,sp2;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            sp1 = sumPrime(a[i]);
            //cout<<"sp1 "<<sp1<<endl;
            for(int j=i+1;j<n;j++){
                sp2 = sumPrime(a[j]);
                //cout<<"sp2 "<<sp2<<endl;

                if(a[j]==a[i])
                    ct = ct+2;
                else if(a[j]%a[i]==0 && sp2%sp1==0){
                        ct++;
                    }
            }
        }
        cout<<ct<<endl;
    }    
}

