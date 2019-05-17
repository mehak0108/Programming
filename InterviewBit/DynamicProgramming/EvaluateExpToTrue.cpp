#include <bits/stdc++.h>
using namespace std;


void fxn(string A) {
    
    int m=A.length(),ct=0;
    string a,b;
    
    for(int i=0;i<m;i++){
        if(A[i]!='T' && A[i]!='F'){
            ct++;
            b.push_back(A[i]);
        }
        else{
            a.push_back(A[i]);
        }
    }
    //cout<<ct;

    int n = m-ct;
    //cout<<n;
    int T[n][n],F[n][n],tik,tkj;
    
    for(int i=0;i<n;i++){
        T[i][i] = (a[i]=='T')? 1:0;
        F[i][i] = (a[i]=='F')? 1:0;
    }
    
    for(int l=2;l<=n;l++){
        for(int i=0;i<n-l+1;i++){
            int j=i+l-1 ;
            T[i][j]=0;
            F[i][j]=0;
            for(int k=i;k<j;k++){
                tik=(T[i][k]+F[i][k])%1003;
                tkj=(T[k+1][j]+F[k+1][j])%1003;
                
                if(b[k]=='&'){
                    T[i][j]+=(T[i][k]*T[k+1][j])%1003;
                    F[i][j]+=(tik*tkj - T[i][k]*T[k+1][j])%1003;
                }
                if(b[k]=='|'){
                    T[i][j]+=(tik*tkj-F[i][k]*F[k+1][j])%1003;
                    F[i][j]+=(F[i][k]*F[k+1][j])%1003;
                }
                if(b[k]=='^'){
                    T[i][j]+=(T[i][k]*F[k+1][j]+F[i][k]*T[k+1][j])%1003;
                    F[i][j]+=(T[i][k]*T[k+1][j]+F[i][k]*F[k+1][j])%1003;
                }
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<T[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<< T[0][n-1]%1003;
}

int main(){
    string s = "T|T&F^T";
    fxn(s);
}