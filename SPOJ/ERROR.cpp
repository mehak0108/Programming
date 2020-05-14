#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char s1[100000];
        cin>>s1;
        char s2[4] = "010";
        char s3[4] = "101";
        char *p = strstr(s1,s2);
        char *q = strstr(s1,s3);
        if(p||q)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;


    }

}
