#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,a;
    cin>>n;
    map<int ,int>m;
    for(int i=0;i<n;i++){
        cin>>a;
        m[a]++;
    }
    int ans=0;
    for(auto it=m.begin();it!=m.end();it++){
        int b = it->second;
        if(ans<b)
            ans = b;
    }
    cout<<ans;

}
