#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k=1;
        int i=1;
        int j=1;
        cin>>n;
        while(k<n){
            j++,k++;
            if(k==n)
                break;

            while(j>1 && k<n)
                i++,j--,k++;
            if(k==n)
                break;

            i++,k++;
            if(k==n)
                break;

            while(i>1 && k<n)
                i--,j++,k++;


        }
        cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<endl;
    }
    return 0;

}
