#include<iostream>
using namespace std;

int checkPal(long long k){
    long long rev=0,p=k;
    while(p!=0){
        p=p%10;
        rev=rev*10+p;
        p=p/10;
    }
    if(rev == k)
        return 1;
    else
        return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long k ;
        int flag=0;
        cin>>k;
        //p=k;
        while(1){
            flag = checkPal(k);
            if(flag==1){
                cout<<k<<endl;
                break;
            }
            k++;
        }
    }
}
