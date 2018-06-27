#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n,q,r;
    cin>>n;
    vector<string> s;
    string p,a;
    //string s[10],p;
    for(int i=0;i<n;i++){
        cin>>a;
        s.push_back(a);
    }
    cin>>q;
    while(q--){
        cin>>r>>p;
        if(s.find(p)!=s.end())
            cout<<p<<endl;
        else{
            
        }


    }
}
