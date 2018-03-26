#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,s=1;
    cin>>t;
    while(t--){
        int n,p,i;
        cin>>n>>p;
        int a[p],sum=0,sum1=0;
        for(int i=0;i<p;i++){
            cin>>a[i];
        }
        sort(a,a+p);

        for(i=p-1;i>=0;i--){
            sum+=a[i];
            if(sum>=n)
                break;
        }
        if(sum>=n)
            cout<<"Scenario #"<<s<<":"<<endl<<p-i<<endl;
        else
            cout<<"Scenario #"<<s<<":"<<endl<<"impossible"<<endl;
        s++;
    }
}
