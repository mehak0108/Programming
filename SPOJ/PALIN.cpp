#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

#define ll long long

int main(){
    ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n;
        p=n;
        vector<ll> v;
        while(p){
            v.push_back(p%10);
            p=p/10;
        }
        reverse(v.begin(),v.end());
        vector<ll> ans(v.size(),0);

        // for(int i=0;i<v.size();i++)
        //      cout<<v[i]<<endl;
        // ans[0] = v[0];
        // ans[v.size()-1]=v[0];
        ll i=0,j=v.size()-1;
        while(i<j){
            if(v[i]<v[j]){
                ans[i] = v[i]+1;
            }
            else{
                ans[i] = v[i];
            }
            cout<<ans[i]<<" ";
            ans[j] = ans[i];
            i++;j--;
        }
        for(int i=0;i<ans.size();i++)
            cout<<ans[i];
        cout<<endl;
        ans.clear();
    }

}



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
