#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,sum=0;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=(sum+a[i])%n;
        }
        if(sum==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
