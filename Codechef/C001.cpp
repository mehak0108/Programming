#include <bits/stdc++.h>
using namespace std;

void appended(string &s1,string &s2){
    s1 = s1+s2;
}
void deleted(string &s, long long k){
    for(long long i=1;i<=k;i++)
        s.pop_back();
}
void print(string s,long long k){
    cout<<s[k-1]<<endl;
}

int main(){
    long long q;
    cin>>q;
    stack<string> st;
    string a;
    st.push(a);
    while(q--){
        int t;
        cin>>t;
        if(t==4){
            //if(!st.empty()){
            st.pop();
                //if(!st.empty())
            a = st.top();
            //}
            //cout<<a<<endl;
        }
        else{
            string s;
            cin>>s;

            if(t==1){
                appended(a,s);
                st.push(a);
                //cout<<st.top()<<endl;
            }
            else{
                long long z = stoi(s);
                //cout<<z<<endl;
                if(t==2){
                    deleted(a,z);
                    st.push(a);
                    //cout<<st.top()<<endl;
                }

                else 
                    if(t==3){
                        print(a,z);
                        //v.push_back(a[z-1]);
                    }
                }
            }  
        }
    }
