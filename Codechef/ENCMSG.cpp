#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n>>s;
        for(int i=0;i<n-1;i=i+2){
            swap(s[i],s[i+1]);
        }

        for(int i=0;i<n;i++){
            s[i] = 219 - s[i];
            cout<<s[i];
        }

        cout<<endl;

    }
}

