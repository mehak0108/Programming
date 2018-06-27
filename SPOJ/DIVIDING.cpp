#include<iostream>
using namespace std;

int main(){
    long n;
    cin>>n;
    long a[n],sum1=0,sum2=0;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum1+=a[i];
        sum2+=i;
    }

    if(sum1==sum2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
