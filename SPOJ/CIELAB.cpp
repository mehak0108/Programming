#include<iostream>
using namespace std;

int main(){
    int a,b, res;
    cin>>a>>b;
    res = a-b;
    if(res%10 == 9)
        res = res-1;
    else
        res = res+1;
    cout<< res;
}
