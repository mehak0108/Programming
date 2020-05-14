#include <bits/stdc++.h>

#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX         100001
#define ll          long long
#define ld          long double
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define lol         1000000007
#define endl        '\n'
#define debug(x)    cerr << #x << " = " << x << endl;

using namespace std;

void solve(int n)
{
    vi a(n);
    rep(i,0,n) cin>>a[i];

    int ct=1;
    stack<int>st;
    rep(i,0,n)
    {
        if(ct==a[i])
        {
            ct++;
            // cout<<ct<<" ";
        }
        else
        {
            if(st.empty())
                st.push(a[i]);
            while(!st.empty() && ct==st.top())
            {
                st.pop();
                ct++;
                // cout<<ct<<"     ";
            }
            if(!st.empty() && ct!=st.top())
                st.push(a[i]);
        }
    }

    // while(!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    while(!st.empty())
    {
        if(ct==st.top())
        {
            ct++;
            st.pop();
        }
        else 
            break;
    }

    if(ct==n+1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
}


int main()
{
    // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // int t=1000;
//  cin>>t;
    while(1){
        int n;
        cin>>n;
        if(n==0)
            break;
        solve(n);
    }
    return 0;
}

// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;

// int main(){
//     int n;
//     while(1){
//     cin>>n;
//     if(n==0)
//         break;
//     else{
//         queue<int> q;
//         int a;
//         stack<int> s;
//         for(int i=0;i<n;i++){
//             cin>>a;
//             q.push(a);
//         }

//         int c=1;
//         while(!q.empty() || !s.empty()){
//             if(!q.empty() && q.front() == c){
//                 q.pop();
//                 c++;
//             }
//             else{
//                 if(!s.empty() && s.top() == c){
//                     s.pop();
//                     c++;
//                 }
//                 else{
//                     if(!q.empty()){
//                         int f= q.front();
//                         s.push(f);
//                         q.pop();
//                     }
//                     else{
//                         break;
//                     }
//                 }
//             }

//         }
//         if(c==n+1){
//             cout<<"yes"<<endl;
//         }else{
//             cout<<"no"<<endl;
//         }

//     }
//     }

// }
