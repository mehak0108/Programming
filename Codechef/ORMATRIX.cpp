#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a[1010][1010],ct[1010][1010];
        string s;
        bool flag=false;
        memset(ct,-1,sizeof(ct));
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>s;
            for(int j=0; j<m; j++)
                a[i][j] = s[j]-'0';
        }
        int u,v;
        for(u=0; u<n; u++){
            for(v=0; v<m; v++){
                if(a[u][v]==1)
                    break;
            }
        }
        if(u==n && v==m)
            flag=true;

        if(!flag){

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(a[i][j]==1){
                        for(int p=0;p<m;p++){
                                ct[i][p]=1;
                        }
                        for(int q=0;q<n;q++){
                                ct[q][j] = 1;
                        }
                    }
                }
            }


            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(a[i][j]==1)
                        ct[i][j]=0;
                    if(ct[i][j]==-1){
                        ct[i][j]=2;
                    }
                }
            }


            }
            //cout<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++)
                    cout<<ct[i][j]<<" ";
                cout<<endl;
            }
        }
    }