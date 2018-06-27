#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string a,b,res;
    int carry=0;
    cin>>a>>b;
    cout<<a<<b<<endl;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        res[i] = (int(a[i])+int(b[i])+carry)%10;
        carry = (a[i]+b[i]+carry)/10;
        cout<<res[i]<<endl;
    }
    for(int i=b.length();i<a.length()-b.length();i++){
        res[i]= a[i];
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.length();i++)
        cout<<res[i];
}
