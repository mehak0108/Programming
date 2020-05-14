#include <bits/stdc++.h>
using namespace std;


int main(){

    //long long n = 600851475143;
    long long n;
    cin>>n;
    long long maxp = -1;
    while(n%2==0){
        maxp = 2;
        n = n/2;
    }

    for(int i=3;i<=sqrt(n);i+=2){
        //cout<<n<<" ";
        while(n%i==0){
            maxp = i;
            n/=i;

        }
    }

    if (n > 2)
        maxp = n;
 
    cout<< maxp;
    
    /*bool isPrime[N+1];
    memset(isPrime,true,sizeof(isPrime));

    vector<long long> v;
    for(long long i=2;i<=sqrt(N);i++){
        if(isPrime[i]){
            for(long long p = 2*i;p<=N;p+=i)
                isPrime[p] = false;
        }
    }

    for(long long j=N;j>=0;j--){

        if(isPrime[j] && N%j==0){
            cout<<j;
            return 0;
            
        }
    }*/
   
}
