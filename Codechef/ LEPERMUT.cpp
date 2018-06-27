#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,li=0,tp=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    tp++;
                }
            }

        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                li++;
            }
        }
        if(li == tp){
          cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
