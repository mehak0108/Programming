#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        long long res = 0;
        vector<long long> b;
        cin>>n;
        unordered_map<string, vector<long long>> m;
        string s;
        for(int i=1;i<=n;i++){
            long long ans =0;
            cin>>s;

            if(m.find(s)!= m.end() ){
                if(m[s].size()==1){
                    ans = m[s][0]/2;
                    m[s].push_back(ans);
                }
                else{
                    ans = m[s].back();
                    m[s].push_back(ans);
                }
                
            }
            else{
                ans += 2;
                for(int j=1;j<s.length();j++){
                    if(s[j]==s[j-1] || (s[j]=='d' && s[j-1]=='f') || (s[j]=='f' && s[j-1]=='d') || (s[j]=='j' && s[j-1]=='k') || (s[j]=='k' && s[j-1]=='j') ){
                        ans += 4;
                    }
                    else
                        ans += 2;
                }
                m[s].push_back(ans);
            }
            
            //cout<<ans<<endl;

        }
        for(auto it=m.begin();it!=m.end();it++){
            b = it->second;
            //  cout<<b<<endl;
            for(int i=0;i<b.size();i++){
                res += b[i];
            }
        }
        cout<<res<<endl;
    }
}
