#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    long n1,n2,n3,k,n,no=0;
    cin>>n1>>n2>>n3;
    n=n1+n2+n3;
    int a[n];
    vector <int>d;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    k=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==k){
            no++;
        }
        else{
            if(no>1)
                d.push_back(k);
                no=1;
                k=a[i];
            }
    }

    cout<<d.size()<<endl;
    sort(d.begin(),d.end());
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<endl;
    }


}

