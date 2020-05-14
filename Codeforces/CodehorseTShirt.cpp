#include <iostream>
#include <map>
using namespace std;

int main(){
    int n,ct=0,l;
    cin>>n;
    string s;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }

    for(int i=0;i<n;i++){
        cin>>s;
        m[s]--;
    }
    
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second >0){
            ct+=it->second;
        }
    }
    
    cout<<ct;
    
}
