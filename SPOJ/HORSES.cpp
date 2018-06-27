#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        long long diff = a[1] - a[0];
        for(int j=0;j<n; j++){
                if(a[j+1]-a[j] < diff){
                    diff = a[j+1]-a[j];
                }
        }
        cout<< diff<<endl;
    }
}
