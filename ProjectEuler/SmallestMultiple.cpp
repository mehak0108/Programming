#include <iostream>
#include <algorithm>

using namespace std;

long long lcm(int a,int b){
    return a/__gcd(a,b) * b;
}

int main(){
    int n;
    cin>>n;
    long long ans = 1;

    for(int i=2;i<=n;i++){
        ans = lcm(ans,i);
    }

    cout<<ans;
}

