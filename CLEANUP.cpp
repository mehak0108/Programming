#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
    int t,m,n,b;
    stringstream ss;
    cin>>t;

    for(int j=1; j<=t; j++){
        cin>>n>>m;
        string chef = "", ast = "";
        int a[n] = {0};
        int p=0;
        for(int k=0; k<m; k++){
            cin>>b;
            a[b-1] = 1;
        }

    for(int i=0; i<n; i++){
        if(a[i] == 0){
            ss<<(i+1);
            if(p%2 == 0){
                chef+=ss.str()+" ";
                p++;
            }
            else{
                ast+=ss.str()+" ";
                p++;
            }

             ss.str("");
        }
    }
    cout<<chef<<endl<<ast<<endl;
    }
}
