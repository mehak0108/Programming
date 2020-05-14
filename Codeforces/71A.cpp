#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        ll l = s.length();
        if(l>10){
            cout<<s[0]<<l-2<<s[l-1]<<endl;
        }
        else
            cout<<s<<endl;;
    }
}
