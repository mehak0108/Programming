#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        int n,m,a[100];
        ll ct=0,ans;
        cin>>n>>m;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%m==0)
                ct++;
        }

        ans = pow(2,ct)-1;
        
        cout<<ans<<endl;
    }
}

/*Example Input
2
2 3
1 2
2 3
1 3
Example Output
0
1*/
