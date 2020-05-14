#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,k;
    double sum=0,ans=0;
    cin>>n>>k;
    int a[5001],ext[5001];
    for(int i=0;i<n;i++){
        cin>>a[i];
        ext[i] = ext[i-1]+a[i];

    }
    for(int i=0;i<n;i++){
        for(int j=i+k-1;j<n;j++){
            sum = (double)(ext[j]-ext[i-1])/(j-i+1);
            ans = max(sum,ans);
        }
    }
    
    cout<<fixed<<setprecision(15)<<ans;
    return 0;
}