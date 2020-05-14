#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> findPrime(int n){
    bool isPrime[n+1];
    vector<int> v;
    memset(isPrime,true,sizeof(isPrime));
    for(int i=2;i<=sqrt(n);i++){
        if(isPrime[i]==true){
            for(int p=2*i;p*p<=n;p+=i)
                isPrime[p] = false;
        }
    }

    for(int i=2;i<=n;i++){
        if(isPrime[i]==true)
            v.push_back(i);
    }
    return v;
}

int main(){
    ll t;
    cin>>t;
    vector<int> v = findPrime(100000);
    while(t--){
        ll n, a[200];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        if(a[0]!=1)
            cout<<-1<<endl;
        else{
            for(int i=1;i<n;i++){
                if(find(v.begin(),v.end(),a[i])!=v.end()){
                    cout<<a[i]<<endl;
                    break;
                }
            }
        }
    }
}

