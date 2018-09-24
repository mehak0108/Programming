#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        string s;
        cin>>n>>k;
        ll a[110];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        for(ll i=0;i<n;i++){
            if(a[i]>k)
                s.push_back('0');
            else
            {
                s.push_back('1');
                k = k-a[i];

            }
            //cout<<k<<" ";
        }
        for(ll i=0;i<s.length();i++)
            cout<<s[i];
        cout<<endl;
    }
}

/*2
5 10
3 5 3 2 1
4 6
10 8 6 4*/