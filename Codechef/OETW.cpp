#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,sum=0,ones=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==1)
                ones++;
        }

        if(ones==0)
            cout<<sum/2<<endl;
        else{
            if(a[0]==2 && a[n-1]==2)
                cout<<sum-1<<endl;
            else
                cout<<sum<<endl;
        }

    }
}