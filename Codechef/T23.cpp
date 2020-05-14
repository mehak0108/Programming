#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll a,ll b){
    if(__gcd(a,b)==1)
        return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,a[1010];
        cin>>n;
        bool flag=true;
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        if(a[0]==1){
            flag = false;
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]!=a[j]){
                        bool ans = check(a[i],a[j]);
                        if(ans == true){
                            flag = false;
                            cout<<"YES"<<endl;
                            break;
                        }
                    }
                }
            }
        }

        if(flag)
            cout<<"N0"<<endl;

        /*ll tot = pow(2,n);
        vector<ll> v;
        vector<vector<ll>> vec;
        
        ll ans;

        for(int i=1;i<tot;i++){
            for(int j=0;j<n;j++){
                if(i & (1<<j))
                    v.push_back(a[j]);
            }
            if(v.size()!=1)
                vec.push_back(v);
            v.clear();
        }

        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<vec.size();i++){
            ans = vec[i][0];
            for(int j=0;j<vec[i].size();j++){
                ans = __gcd(vec[i][j],ans);
            }

            if(ans!=1){
                flag = false;
                cout<<"NO"<<endl;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;

    */
    }
}