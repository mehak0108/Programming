#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string t,c;
    unordered_map<char,int> m;
    cin>>t;

    c =t;
    sort(c.begin(),c.end());
    for(int i=0;i<k;i++)
        m[c[i]]++;

    for(int i=0;i<n;i++){
        if(m[t[i]])
            m[t[i]]--;
        else
            cout<<t[i];
    }

}
