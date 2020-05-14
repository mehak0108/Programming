# include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int l;
        cin>>l;
        vector<ll> v(2);
        vector<vector<ll> > vec(l,v);
        for(int i=0; i<l; i++){
            cin>>vec[i][0]>>vec[i][1];
        }
        ll rem=0;
        for(int i=1; i<l; i++){
            ll can_manage = vec[i][0]*vec[i][1];
            rem+=vec[i-1][0]-can_manage;
            if(rem<0){
                rem=0;
            }
        }
        cout<<"Case #"<<i+1<<": "<<max(vec[l-1][0]+rem, vec[l-1][1]+1)<<"\n";
    }
}
