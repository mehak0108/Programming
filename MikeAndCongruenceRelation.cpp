#include<iostream>
using namespace std;

long countPair(long n){
    return n*(n-1)/2;
}

int main(){
    long n,k,c,sum=0;
    cin>>n>>k;
    long r=n%k;
    long p=k-r;
    c=n/k;
    sum= c*(c-1)*p/2;
    sum+=c*(c+1)*r/2;
    cout<<sum;

}
