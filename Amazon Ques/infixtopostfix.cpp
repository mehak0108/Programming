#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

int main()
 {
    ONLINE_JUDGE
    int t;
    cin>>t;
    map<char,int>mp;
    mp['+']=1;
    mp['-']=1;
    mp['*']=2;
    mp['/']=2;
    mp['^']=3;
    mp['(']=-1;
    
    while(t--)
    {
        string A,tmp;
        cin>>A;
        stack<char>s;
        
        for(int i=0;i<A.length();i++)
        {
            if(isalpha(A[i]))
                tmp+=A[i];
            else if(A[i]=='(')
                s.push(A[i]);
            else if(A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/' || A[i]=='^')
                {
                    if(s.empty() || (!s.empty() && mp[A[i]]>mp[s.top()])) 
                        s.push(A[i]);
                    else if(!s.empty() && mp[s.top()]>=mp[A[i]])
                    {
                        while(!s.empty() && mp[s.top()]>=mp[A[i]])
                        {

                            tmp+=s.top();
                            s.pop();
                        }
                        s.push(A[i]);
                    }
                }
            else if(A[i]==')')
            {
                while(s.top()!='(')
                {
                    if(s.empty()) break;
                    tmp+= s.top();
                    s.pop();
                }
                if(!s.empty())
                    s.pop();
            }
        }
        
        while(!s.empty())
        {
            tmp += s.top();
            s.pop();
        }
        cout<<tmp<<endl;
    }
	return 0;
}