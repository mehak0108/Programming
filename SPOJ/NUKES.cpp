#include<iostream>
#include<algorithm>
using namespace std;

int main(){


    long a,n,k;
    cin>>a>>n>>k;
    long b[k];

    for(int i=0;i<k;i++){
        b[i]= a%(n+1);
        a/= (n+1);
    }

    for(int i=0;i<k;i++){
        cout<<b[i]<<" ";
    }


}
