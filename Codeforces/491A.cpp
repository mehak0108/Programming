#include <iostream>
using namespace std;

int main(){
    int a,b,c,n;
    //cin>>t;
    //while(t--){
        cin>>a>>b>>c>>n;
        if((n+c-a-b) > 0 && c<=a && c<=b && a<n && b<n && c<n )
            cout<<n+c-a-b;
        else
            cout<<-1;
    //}
}
