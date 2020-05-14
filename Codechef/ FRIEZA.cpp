#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    string s = "frieza";
    unordered_set<char> u;
    for(int i=0;i<s.length();i++)
        u.insert(s[i]);
    int t;
    cin>>t;
    while(t--){
        string in;
        cin>>in;
        vector<int> ans;
        int i=0;
        while(i<in.length()){
            int ct=0;int ctn=0;
            while(u.find(in[i])!=u.end() && i<in.length()){
                ct++;
                i++;
            }
            while(u.find(in[i])==u.end() && i<in.length()){
                ctn++;
                i++;
            }
            if(ct>0)
                ans.push_back(ct);
            if(ctn>0)
                ans.push_back(ctn);
        }
        for(int i=0;i<ans.size();i++)
            cout<<ans[i];
        cout<<endl;
    }
}
