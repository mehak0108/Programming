#include<iostream>
using namespace std;

int main(){

    long long p,sum;
    while(cin>>p){
        //cin>> p;
        if(p == 0){
            cout<< p;
        }
        else{
        sum = p/2 + p/3 + p/4;

        
        }
        cout<< max(p,sum)<<endl;
    }

}
