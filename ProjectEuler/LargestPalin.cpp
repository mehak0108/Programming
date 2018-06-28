#include <iostream>
using namespace std;

long long taskpal(long long n){
    long long cp = n,res=0,r;
    while(n!=0){
        r = n%10;
        res = res*10 + r;
        n=n/10;
    }
    if(cp == res)
        return res;
    return 0;
}

int main(){
    long long ans,max = 0;
    int a,b,i,j;
    for(a=999;a>=100;a--){
        for(b=a;b>=100;b--){
            ans = taskpal(a*b);
            if(max<ans){ 
                max = ans;
                i=a;
                j=b;
            }
        }
    }
    cout<<max<<i<<j;
}
