#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    if((n&(n-1))==0)
        cout<<"TAK";
    else
        cout<<"NIE";
}
