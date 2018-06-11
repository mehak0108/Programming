#include <iostream>
#include <cmath>
using namespace std;

int main(){
    while(1){
        long long n;
        double a,p,sr;
        cin>>n;
        if(n==-1)
            break;
        a = (double)(n-1)/6;
        //cout<<a<<" ";
        p = (double)(1+8*a);
        //cout<<p<<" ";
        sr = sqrt(p);
        //cout<<sr<<" ";
        if(sr - floor(sr) == 0 )  
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
}
