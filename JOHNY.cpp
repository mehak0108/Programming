#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n,k;

    cin>>t;
    while(t--){
        cin>>n;
        long long a[n],b;
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        cin>>k;

        b=a[k-1];
        sort(a,a+n);

        for(int i=0; i<n;i++){
            if(b == a[i]){
                cout<<i+1<<endl;
            }
        }

    }
}
