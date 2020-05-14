#include<iostream>
using namespace std;

int main()
{

    long n,i,j,k=0;
    cin>>n;
    long a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

            if(a[i]==a[j]){
                k++;
            }
        }
    }

    cout<<k;
}
