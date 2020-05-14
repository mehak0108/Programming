#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*ll fact(ll n)
{
    ll ans=1;
    for(int i=1;i<=n;i++)
        ans = ans*i;
    return ans;
}

int checkPal(ll n){
    ll rev=0,c = n,r;
    while(n!=0){
        r = n%10;
        rev = rev*10+ r;
        n=n/10;
    }
    if(c == rev)
        return 1;
    return 0;
}*/

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,b;
        string res = "1";
        cin>>n;

        for (int i = 0; i < n/10; i++){
            res+="00000";
        }
        b = n%10;
        for (int i = 0; i < b/2; i++){
            res+="0";
        }
        cout<<1<<" "<<res<<endl;
    }
}