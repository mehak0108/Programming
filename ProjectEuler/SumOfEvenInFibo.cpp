#include <iostream>
using namespace std;

#define N 4000000

int main(){
    long long a=1, b =2,c=0,sum=0,ct=3;

    while(c<=N){
        c = a+b;
        if(c%2 ==0)
            sum+=c;
        a = b;
        b = c;
        //ct++;
    }

    cout<<sum+2;
}
