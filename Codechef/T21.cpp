#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        long long suma = 0,sumb=0,ans;
        for(long long i=0;i<a.length();i++){
            suma = (suma + a[i]-'o')%3;
        }
        for(long long i=0;i<b.length();i++){
            sumb = (sumb + b[i]-'o')%3;
        }
        ans = (suma*sumb)%3;
        cout<<ans<<endl;
    }
}
