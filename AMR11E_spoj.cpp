#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans;
        cin>>n;
        if(n==1)
            cout<<30<<endl;

        if(n==2)
            cout<<42<<endl;

        if(n==3)
            cout<<60<<endl;
        if(n!=1 && n!=2 && n!=3)
            {
                ans = 66+(n-3)*12;
                cout<<ans<<endl;
            }
    }

}
