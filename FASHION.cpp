#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m[n],w[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>m[i];
        }

        for(int i=0;i<n;i++){
            cin>>w[i];
        }

        sort(m,m+n);
        sort(w,w+n);

        for(int i=0;i<n;i++){
            sum+=m[i]*w[i];
        }

        cout<<sum<<endl;
    }
}
