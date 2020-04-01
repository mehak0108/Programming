#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int flag = 1;
    unordered_map<char,long long > m;
    for(long long i=0;i<s.length();i++)
        m[s[i]]++;
    for(auto it=m.begin();it!=m.end();it++){
        long long a= it->second;
        if(a>=2){
            flag = 0;
            
        }
    }
    if(n==1)
        flag = 0;
    if(flag == 0)
        cout<<"Yes"<<endl;
    
    if(flag == 1)
        cout<<"No"<<endl;
}

