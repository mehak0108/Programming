#include <iostream>
using namespace std;

int main(){
    unsigned long long a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else
            if(b==0)
                cout<<-1<<endl;
            else
                if(b==1){
                    if(a==0)
                        cout<<1<<endl;
                    else
                        cout<<-1<<endl;
                }
                else{
                    long long a1 = __builtin_popcountll (a);
                    long long b1 = __builtin_popcountll (b-1);
                    long long op = b1-a1+1;
                    if(op>0)
                        cout<<op<<endl;
                    else
                        cout<<2<<endl;
                }
    }
}
