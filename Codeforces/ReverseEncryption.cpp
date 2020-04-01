#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

string reverse(int st,int end,string str){
    while(st<end){
        char temp = str[st];
        str[st] = str[end];
        str[end] = temp;
        st++;
        end--;
    }
    return str;
}

vector<int> findDiv(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i ==i)
                v.push_back(i);
            else{
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
}

int main(){
    int n;
    string t, ans=" ";
    cin>>n>>t;
    vector<int>v = findDiv(n);
    /*for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl; */
    
    for(int i=0;i<v.size();i++){
        ans = reverse(0,v[i]-1,t);
        t = ans;
    }
    cout<<ans;
}