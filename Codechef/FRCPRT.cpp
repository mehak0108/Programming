#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*void shiftZero(int *a){
    int ct=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[ct++],a[i]);
        }
    }
}*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a[200][200],l=0;
        string s,q,r;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<m;j++){
                a[i][j] = s[j] - '0';
            }
        }

        cin>>q;

        for(int i=0;i<q.length()-1;i++){
            if(q[i]=='L' && q[i+1]=='R')
                r[l++] = 'R';
            else if(q[i]=='R' && q[i+1]=='L')
                r[l++] = 'L';
            if(q[i]=='U' && q[i+1]=='D')
                r[l++]='D';
            else if(q[i]=='D' && q[i+1]=='U')
                r[l++] = 'U';
        }

        for(int i=0;i<r.length();i++)
            cout<<r[i];

        for(int i=0;i<q.length();i++){
            if(q[i]=='L'){
                for(int i=0;i<n;i++){
                    int ct=0;
                    for(int j=0;j<m;j++){
                        if(a[i][j]!=0)
                            swap(a[i][ct++],a[i][j]);
                    }
                }
            }
            else if(q[i]=='R'){
                for(int i=0;i<n;i++){
                    int ct=0;
                    for(int j=0;j<m;j++){
                        if(a[i][j]==0)
                            swap(a[i][ct++],a[i][j]);
                    }
                }
            }
            else if(q[i]=='U'){
                for(int j=0;j<m;j++){
                    int ct=0;
                    for(int i=0;i<n;i++){
                        if(a[i][j]!=0)
                            swap(a[ct++][j],a[i][j]);
                    }
                }
            }
            else{
                for(int j=0;j<m;j++){
                    int ct=0;
                    for(int i=0;i<n;i++){
                        if(a[i][j]==0)
                            swap(a[ct++][j],a[i][j]);
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<a[i][j];
            cout<<endl;
        }

    }
}