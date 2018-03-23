#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long num;
        cin>>num;
        long long ans;
        ans=192+(num-1)*250;
        cout<<ans<<endl;
    }

}
