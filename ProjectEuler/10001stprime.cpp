#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    for(c=3;c<500;c++){
        for(b=2;b<c;b++){
            for(a=1;a<b;a++){
                if(a+b == 1000-c && pow(a,2)+pow(b,2)==pow(c,2))
                    cout<<a<<" "<<b<<" "<<c<<" "<<a*b*c;
            }
        }
    }
}
