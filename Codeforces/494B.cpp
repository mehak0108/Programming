#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //int t;
    //cin>>t;
    //while(t--){
        int a,b,x,sign,ct=0,i=0;
        cin>>a>>b>>x;
        string s;
        if(a>b)
            sign = 1;
        else
            sign =0;
        while(i<x){
            if(sign){
                s.push_back('0');
                a--;
                sign =0;
                ct++;
            }
            else{
                s.push_back('1');
                b--;
                sign =1;
                ct++;
            }
            i++;
        }
        if(!sign){
            while(a--)
                s.push_back('0');
            while(b--)
                s.push_back('1');
        }
        else{
            while(b--)
                s.push_back('1');
            while(a--)
                s.push_back('0');
        }

    cout<<s;
    return 0;       

}
