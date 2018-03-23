#include<iostream>
#include<cmath>
using namespace std;

int nof(int a){
    int nf=1;
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)
            nf++;
    return nf;
}
int main(){
    int n,nor=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        nor+=nof(i);
    }
    cout<<nor;
}
