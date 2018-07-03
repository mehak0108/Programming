#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s,b,e="";
    while(t--){
        int n;
        cin>>n;
        set<string> pass;
        for(int i=1;i<=n;i++){
            cin>>s;
            pass.insert(s);
        }
        cin>>b;
        for(int i=0;i<b.length();b++){
            if(pass.find(e)==pass.end()){
                e.push_back(b[i]);
            }
            else{
                e.erase();
                
            }
        }
    }
}
