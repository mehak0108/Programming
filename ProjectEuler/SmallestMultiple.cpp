#include <iostream>
#include <boost/math/common_factor.hpp>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans = 1;

    for(int i=2;i<=n;i++){
        ans = boost::math::lcm(ans,i);
    }

    cout<<ans;
}

