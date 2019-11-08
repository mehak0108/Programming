#include <bits/stdc++.h>
using namespace std;
#define ll long long

void insertInDeque(deque<char> &qe, char ch) 
{ 
    if (qe.empty()) 
        qe.push_back(ch);
    else
    { 
        char tmp = qe.back(); 
        while( tmp > ch && !qe.empty()) 
        { 
            qe.pop_back(); 
            if (!qe.empty()) 
                tmp = qe.back(); 
        } 
        qe.push_back(ch);
    } 
} 

string findMinimum(ll str1) 
{ 
    string str = to_string(str1);
    int len = str.size(); 
    deque<char> dq; 
    string res = ""; 
    int k = len-1, i;
    
    for (i=0; i<=len-k; i++) 
        insertInDeque(dq, str[i]);

    while (i<len) 
    { 
        res += dq.front(); 
        dq.pop_front(); 
        insertInDeque(dq, str[i]); 
        i++; 
    } 
    res += dq.front(); 
    dq.pop_front(); 
    return res; 
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        string s =  findMinimum(n);
        ll k=0, i=0;
        while(s[i]=='0')
            i++;
        if(i==s.size())
        {
            cout<<0<<endl; continue;
        }
        ll ans = stol(s.substr(i));
        cout<<ans<<endl;
    }
}
 