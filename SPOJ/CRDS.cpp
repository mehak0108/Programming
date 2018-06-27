#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,b;
        cin>>n;
        b = 3*n*(n+1)/2 -n;
        cout<<b%1000007<<endl;
    }
}
