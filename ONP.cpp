#include<iostream>
#include<stack>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char exp[400];
        cin>>exp;
        int len= strlen(exp);
        stack <char> s;
        for(int i=0;i<len;i++){
            if(isalpha(exp[i]))
                cout<<exp[i];
            else
                if(exp[i]==')'){
                    cout<<s.top();
                    s.pop();
                }
                else
                    if(exp[i]!='(')
                        s.push(exp[i]);
        }
        cout<<endl;
    }
}
