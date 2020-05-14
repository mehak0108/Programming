#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define debug(n1) cout<<n1<<endl
#define MAX 100001

vector<ll> sieve(){
    vector<ll> prime;
    bool isPrime[MAX];
    memset(isPrime,true,sizeof(isPrime));

    for(ll i=2;i*i<MAX;i++){
        if(isPrime[i]){
            for(ll p=2*i;p<MAX;p+=i)
                isPrime[p] = false;
        }
    }

    for(ll i=3;i<MAX;i+=2){
        //cout<<i;
        if(isPrime[i])
            prime.push_back(i);
    }
    return prime;
}

void printPrime(ll l,ll r, vector<ll> prime){
    bool isp[r-l+1];

    for(int i=0; i<=r-l; i++){
            isp[i]=true;
        }
    //memset(isp,true,sizeof(isp));

    for(ll i=0;prime[i]<=sqrt(r);i++){
        ll currp = prime[i];
        ll base = (l/currp)*currp;
        if(base<l)
            base+= currp;
        for(ll j=base;j<=r;j+=currp)
            isp[j-l] = false;
        if(base == currp)
            isp[base - l] = true;
    }

    for(ll i=0;i<=l-r;i++)
        if(isp[i])
            cout<<i+l<<endl;
}

int main(){
    //SPEED;
    ll t,l,r;
    cin>>t;

    vector<ll>prime = sieve();
    while(t--){
        cin>>l>>r;

        //printPrime(m,n,prime);

        bool isp[r-l+1];

    for(int i=0; i<=r-l; i++){
            isp[i]=true;
        }
    //memset(isp,true,sizeof(isp));

    for(ll i=0;prime[i]<=sqrt(r);i++){
        ll currp = prime[i];
        ll base = (l/currp)*currp;
        if(base<l)
            base+= currp;
        for(ll j=base;j<=r;j+=currp)
            isp[j-l] = false;
        if(base == currp)
            isp[base - l] = true;
    }

    for(ll i=0;i<=l-r;i++)
        if(isp[i])
            cout<<i+l<<endl;
    }
}
