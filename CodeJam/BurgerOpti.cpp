#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    for(int p=1;p<=t;p++){
        int n,k=0,ct=0;
        ll ans=0;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++)
            cin>>v[i];
        sort(v,v+n);
        //if(n%2==0){
        for(int j=0;j<n;j++){
            ans = ans + (v[j]-k)*(v[j]-k);
            ct++;
            if(ct==2){
                ct=0;k++;
            }
        }
        // }else{

        // }
        cout<<"Case #"<<p<<": "<<ans<<endl;
    }
}