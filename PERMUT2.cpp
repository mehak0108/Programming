#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    while(1){
        int n,a;
        cin>>n;
        if(n==0)
            break;
        unordered_map<int,int> m;
        vector<int>v,v2;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
            m[v[i]] = i+1;
        for(int i=0;i<n;i++){
            v2.push_back(m[i+1]);
        }
        if(v == v2)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
    }
}
