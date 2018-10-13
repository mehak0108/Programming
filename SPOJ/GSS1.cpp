#include <bits/stdc++.h>
#define ll long long
using namespace std;

void build(int i,int st,int ed,ll *tree, ll *a){
    if(st == ed)
        tree[i] = a[st];
    else{
        int mid = (st+ed)/2;
        build(2*i,st,mid,tree,a);
        build(2*i+1,mid+1,ed,tree,a);
        /*if(tree[2*i]<tree[2*i+1])
            tree[i] = tree[2*i+1];
        else
            tree[i] = tree[2*i];*/
        tree[i] = tree[2*i] + tree[2*i+1];
    }
}

ll query(int i,int st,int ed, int x, int y, ll *tree, ll *a){

    if(x>ed || y<st)
        return INT_MAX;
    if(x<=st && ed<=y)
        return tree[i];
    int mid = (st+ed)/2;
    ll p1 = query(2*i,st,mid,x,y,tree,a);
    ll p2 = query(2*i+1,mid+1,ed,x,y,tree,a);
    if(p1>p2)
        return p1;
    else
        return p2;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll a[50005],tree[100005];
    ll n,m,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    while(m--){
        cin>>x>>y;
        build(1,1,n,tree,a);
        int c = query(1,1,n,x,y,tree,a);
        cout<<c<<endl;
    }
}
