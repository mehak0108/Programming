#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,t;
    cin>>t;
    while(t--){
        cin>>n;

        ll a = n, ct=0,r, cc=0;
        while(n!=0){
            r = n%10;
            if(r==3)
                cc++;
            ct++;
            n = n/10;
        }
        if(cc<=3 && ct<333)
            cout<<333<<endl;
        else
            if(cc==0 && ct>333){
                
            }
            else

    }
}

