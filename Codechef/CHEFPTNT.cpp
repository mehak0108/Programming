#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m,x,k,p=0,q=0;
        string s;
        cin>>n>>m>>x>>k>>s;
        long z[m];
        for(int i=1;i<=m;i++){
            z[i]=i;
        }
        for(int i=0;i<k;i++){
            if(s[i] == 'E')
                {
                    p++;
                }
            else
                {
                    q++;
                }
        }

        if(n>k || q==0 || ()){
            cout<<"no"<<endl;
        }
        else{
            for(int i=0;i<m;i++){
                if(z[i]%2!=0){

                    if(q<x || ){

                    }

                }
            }
        }


    }
}
