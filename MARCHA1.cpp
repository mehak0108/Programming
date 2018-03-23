#include<iostream>
using namespace std;

int main(){
    int t,n,m,sum;
    cin>>t;

    while(t--){
        cin>>n>>m;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<(1<<n);i++){
        sum=0;

            for(int j=0; j<n;j++){
                if(i&(1<<j))
                    sum+=a[j];
            }
            if(sum == m){
                cout<<"Yes"<<endl;
                break;
            }
        }

         if(sum!=m)
                cout<<"No"<<endl;

    }
}
