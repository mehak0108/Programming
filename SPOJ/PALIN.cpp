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

void MOD(ll &x)
{
    if (x >= lol) x -= lol;
    if (x < 0) x += lol;
}

string addVal(string s,int num)
{
    int n = s.length();

    string ans;
    int res,p;
    int carry = 0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            res = (s[i]-'0')+num;
        else
            res = (s[i]-'0')+carry;
        carry = res/10;
        p = res%10;
        ans.pb(p+'0');
    }

    if(carry) ans.pb(carry+'0');
    reverse(ans.begin(),ans.end());
    return ans;
}

void solve()
{
    string s;
    cin>>s;

    int n = s.length();

    bool fl = true;
    rep(i,0,n)
    {
        if(s[i]!='9')
        {
            fl = false;
            break;
        }
    }

    if(fl) 
    {
        // reverse(all(s));
        cout<<addVal(s,2)<<endl;
        return;
    }    

    if(n%2==0)
    {
        int hf = n/2;
        string fst = s.substr(0,hf);

        string tmp = fst;
        reverse(all(fst));
        tmp += fst;
        if(tmp>s)
            cout<<tmp<<endl;
        else
        {
            string sum = addVal(fst,1);
            tmp = sum;
            reverse(all(sum));
            tmp+= sum;
            cout<<tmp<<endl;
        }
    }
    else
    {
        int hf = n/2;
        string fst = s.substr(0,hf);
        string fsthf = s.substr(0,hf+1);

        string tmp = fst+s[hf];
        reverse(all(fst));
        tmp += fst;
        if(tmp>s)
            cout<<tmp<<endl;
        else
        {
            reverse(all(fsthf));
            string sum = addVal(fsthf,1);
            string ok = sum.substr(0,hf);
            tmp = sum;
            reverse(all(ok));
            tmp += ok;
            cout<<tmp<<endl;
        }
    }
    
}


int main()
{
    // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

// #define ll long long

// int main(){
//     ONLINE_JUDGE
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,p;
//         cin>>n;
//         p=n;
//         vector<ll> v;
//         while(p){
//             v.push_back(p%10);
//             p=p/10;
//         }
//         reverse(v.begin(),v.end());
//         vector<ll> ans(v.size(),0);

//         // for(int i=0;i<v.size();i++)
//         //      cout<<v[i]<<endl;
//         // ans[0] = v[0];
//         // ans[v.size()-1]=v[0];
//         ll i=0,j=v.size()-1;
//         while(i<j){
//             if(v[i]<v[j]){
//                 ans[i] = v[i]+1;
//             }
//             else{
//                 ans[i] = v[i];
//             }
//             cout<<ans[i]<<" ";
//             ans[j] = ans[i];
//             i++;j--;
//         }
//         for(int i=0;i<ans.size();i++)
//             cout<<ans[i];
//         cout<<endl;
//         ans.clear();
//     }

//}



// #include<iostream>
// using namespace std;

// int checkPal(long long k){
//     long long rev=0,p=k;
//     while(p!=0){
//         p=p%10;
//         rev=rev*10+p;
//         p=p/10;
//     }
//     if(rev == k)
//         return 1;
//     else
//         return 0;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long k ;
//         int flag=0;
//         cin>>k;
//         //p=k;
//         while(1){
//             flag = checkPal(k);
//             if(flag==1){
//                 cout<<k<<endl;
//                 break;
//             }
//             k++;
//         }
//     }
// }
