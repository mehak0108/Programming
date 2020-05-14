#include <iostream>
using namespace std;

#define MAX 200000
 
struct point
{   
    long long x,y;
};

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n,ct[MAX];
    cin>>n;
    point p[MAX];
    memset(ct,0,sizeof(ct));

    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
    }
    for(inr i=0;i<n;i++){
        if(p[i].x<i &&  i<p[i].y)
    }
}
