#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>
#include<bits/c++io.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        int a1,b1,c1;
        char d,e;
        cin>>a>>d>>b>>e>>c;
        if(a.find("machula")){
            a1 = stoi(c)- stoi(b);
        }
        else
            if(b.find("machula")){
                b1=stoi(c)-stoi(a);
            }
            else
                if(c.find("machula")){
                    c1=stoi(a)+ stoi(b);
                }
                else{
                    return 0;
                }
        cout<<a1<<d<<b1<<e<<c1;

    }

}
