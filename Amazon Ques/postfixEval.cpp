#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

int calculate(int a,int b,char c)
{
    if(c=='+')
        return a+b;
    if(c=='-')
        return a-b;
    if(c=='*')
        return a*b;
    if(c=='/' && b!=0)
        return a/b;
    return 0;
    
}
int main()
 {
 	ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        cin>>A;
            
        stack<char>s;
        int n = A.length();
        
        for(int i=0;i<n;i++)
        {
            if(A[i]>='0' && A[i]<='9')
                s.push(A[i]);
            else
            {
                int x = s.top()-'0';
                s.pop();
                int y = s.top()-'0';
                s.pop();
                
                int val = calculate(y,x,A[i]);
                // cout<<val<<" "; 
                s.push(val+'0');
                
            }
        }
        
        cout<<s.top()-'0'<<endl;
    
    }
	return 0;
}