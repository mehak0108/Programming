#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],sum=0,k;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        int d=sum%x;
        k=sum/x;
        if(a[0]<=d)
            cout<<-1<<endl;
        else
            cout<<k<<endl;
    }



}
