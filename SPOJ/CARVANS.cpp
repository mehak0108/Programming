#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){

        cin>>n;
        int b[n],num=1,p;
        for(int i=0;i<n;i++){
        cin>>b[i];
        }
        p=b[0];
    for(int j=1;j<n;j++){
        if(p>b[j]){
                num++;
                p=b[j];

            }
    }

    cout<<num<<endl;

    }

}
