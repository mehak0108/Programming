#include<iostream>
using namespace std;

int main(){
    int t,g,i,q;
    long long n;

    cin>>t;
    while(t--){
        cin>>g;
        for(int j=1;j<=g;j++){
            cin>>i>>n>>q;

            if(n%2 == 0){
                cout<<n/2<<endl;
            }else
            {
                if((i%2 != 0 && q == i) || (i%2==0 && q==i))
                    cout<<n/2<<endl;
                else
                    //if(i%2!=0 && q!=i)
                    cout<<n/2+1<<endl;
            }

        }
    }
}
