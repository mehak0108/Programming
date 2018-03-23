#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if(y==x || y==x-2){
            if(y==x){
                if(y%2==0)
                    cout<<x+y<<endl;
                else
                    cout<<x+y-1<<endl;
            }
            if(y==x-2){
                if(x%2==0)
                    cout<<x+y<<endl;
                else
                    cout<<x+y-1<<endl;
            }
        }
        else
            cout<<"No Number"<<endl;
    }

}
