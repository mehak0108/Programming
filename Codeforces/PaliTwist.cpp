#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n/2;i++){
            if((s[i] == s[n-i-1]) || (s[i] == s[n-1-i]-2) || (s[i]-2 == s[n-i-1]))
                continue;
            else
                break;
        }
        if(i==(n/2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

