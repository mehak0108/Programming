#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long p,q,r,n;
        cin>>p>>q>>r;
        n = 2*r/(p+q);
        long long d = (q-p)/(n-5);
        long long a = p-2*d;
        cout<<n<<endl;
        for(int i=0;i<n;i++)
            cout<< a+i*d<<" ";
        cout<<endl;
    }
}
