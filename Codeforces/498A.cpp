#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a[1010],n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)
                    a[i] = a[i] -1;
                else
                    a[i] = a[i] +1;
            }
        }

        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        
    }
}
