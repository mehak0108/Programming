#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(i%3==0 || i%5==0)
            sum+=i;
    }

    cout<<sum;
}
