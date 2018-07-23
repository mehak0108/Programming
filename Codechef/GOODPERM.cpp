#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,b,ans=0;
        cin>>n>>k;
        int p[10],a[10];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
            p[i]=i;
        do{
            int ct=0;
            for(int i=1;i<=n;i++){
                if(a[i] && a[i]!=p[i])
                    ct-=100;
            }

            for(int i=2;i<=n;i++){
                if(p[i]>p[i-1])
                    ct++;
            }
            ans+=(ct==k);
        }while(next_permutation(p+1,p+1+n));

        cout<<ans<<endl;
    }
}

