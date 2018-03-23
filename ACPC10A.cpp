#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    while(true){
        cin>>x>>y>>z;
        if(x==0 && y==0 && z==0){
            break;
        }
        else
        {
            if(y-x == z-y){
                cout<<"AP "<<2*z-y<<endl;
            }
            else if(y/x == z/y || x!=0 || y!=0 || z!=0){
                cout<<"GP "<<(z*z)/y<<endl;
            }

        }

    }
}
