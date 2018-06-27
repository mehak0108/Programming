#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,k,sum1=0,sum2=0;
        cin>>n>>k;
        long w[n];
        if(k>(n/2))
            k=(n-k);

        for(int i=0;i<n;i++){
            cin>>w[i];
        }

        sort(w,w+n);

        for(int i=0;i<k;i++){
            sum1+=w[i];
        }
        for(int i=k;i<n;i++){
            sum2+=w[i];
        }
        cout<<sum2-sum1<<endl;
    }
}
