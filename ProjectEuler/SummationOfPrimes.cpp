#include <iostream>
#include <string.h>
using namespace std;

long long sumPrime(long long n){
    long long sum=0;
    bool isp[n+1];
    memset(isp,true,sizeof(isp));

    for(long long i=2;i*i<=n;i++){
        if(isp[i]){
            for(long long p=2*i;p<=n;p+=i )
                isp[p] = false;
        }
    }

    for(int i=2;i<=n;i++){
        if(isp[i])
            sum+=i;
    }
    return sum;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long n;
    cin>>n;

    long long ans = sumPrime(n);
    cout<<ans;
}
