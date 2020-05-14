#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        string s,b,e="";
        vector<string> v;
        int n;
        cin>>n;
        set<string> pass;
        for(int i=0;i<n;i++){
            cin>>s;
            pass.insert(s);
        }
        cin>>b;
        for(int i=0;i<b.length();i++){
            e+=b[i];
            if(pass.find(e)!=pass.end()){
                v.push_back(e);
                e = "";
            }
        }
        int k=0;
        for(int i=0;i<v.size();i++)
            k+=v[i].size();
        if(v.size()==0 || k!=b.length()){
            cout<<"WRONG PASSWORD\n";
        }
        else{
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<"\n";
        }
        
    }
    return 0;
}
