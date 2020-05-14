#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int primeFactor(int n){
    //int ct;
    vector<int>v;
    /*for(int i=2;i<=sqrt(n);i++){
        //ct=0;
        if(n%i==0){
            ct=0;
            while(n%i==0){
                n=n/i;
                ct++;
            }
            v.push_back(ct);
        }
    }
    if(n!=1)
        v.push_back(++ct);
    return v.size();*/
    int ct=0;
    if(n%2==0)
        v.push_back(++ct);
    while (n%2 == 0)
    {
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        if(n%i==0){
            ct=0;
            while (n%i == 0)
        {
            n = n/i;
            ct++;
        }
        v.push_back(ct);
        }
        
    }
    if (n > 2)
        v.push_back(++ct);
    return v.size();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int sum=0;
        for(int i=n;i<m;i++){
            sum+=primeFactor(i);
        }
        cout<<sum<<endl;
    }
}
