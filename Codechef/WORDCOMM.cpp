#include <bits/stdc++.h>
using namespace std;

unordered_set<string> us;

int check(string s){
    if(us.find(s)!=us.end())
        return 1;
    return 0;
}

int main(){
    int n;
    cin>>n;
    string s,a,b;
    while(1){
        cin>>s;
        if(s!='END'){
            us.insert(s);   
        }
        else
            break;
    }
    cin>>a>>b;
    int l1 = a.length();
    int l2 = b.length();
    int d = l1-l2;
    int ct = 0;

    if(d==0){
        for(int i=0;i<l1;i++){
            if(a[i]!=b[i])
                ct++;
        }
    }

    cout<<ct<<endl;
    /*for(int i=0;i<l1;i++){
        if(i<l2){
            if(a[i]!=b[i]){
                a[i] = b[i];
                int c = check(a);
                if(c==0){
                    cout<<-1<<endl;
                    return 0;
                }
                ct++;
            }
        }
    }

    if(d<0){

    }
    for(int i=0;i<d;i++){

    }*/
    
}

