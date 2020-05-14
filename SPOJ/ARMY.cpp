#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,ng,nm;
    cin>>t;
    while(t--){
        cin>>ng>>nm;
        int a[ng],b[nm],sum1=0,sum2=0;
        for(int i=0;i<ng;i++){
            cin>>a[i];
        }
        for(int i=0;i<nm;i++){
            cin>>b[i];
        }
        int max1 = *max_element(a,a+ng);
        int max2 = *max_element(b,b+nm);
        if(max1 == max2)
            cout<<"Godzilla"<<endl;
        else

            if(max1>max2)
                cout<<"Godzilla"<<endl;
            else
                if(max2>max1)
                    cout<<"MechaGodzilla"<<endl;  
                else
                    cout<<"uncertain"<<endl;
            }
        }
