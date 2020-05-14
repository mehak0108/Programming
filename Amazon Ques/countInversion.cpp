#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
int a[10000001];
long long ct;

void merge(int l, int mid, int r)
{
    int n = mid-l+1;
    int m = r-mid;
    // cout<<n<<endl<<m;
    int L[n], R[m];
    
    for(int i=0;i<n;i++) L[i] = a[i+l];
    for(int i=0;i<m;i++) R[i] = a[i+mid+1];
    
    int i=0,j=0,k=l;
    while(i<n && j<m)
    {
        if(L[i]<=R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++] = R[j++];
            ct += n-i;
        }
    }
    
    while(i<n)
        a[k++] = L[i++];
    while(j<m)
        a[k++] = R[j++];
    return;
}

void mergesort(int l,int r)
{
    // cout<<l<<" "<<r<<endl;
    if(l<r)
    {
        int mid = l+ (r-l)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);
        merge(l,mid,r);
    }
    return;
}

int main()
 {
    ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++) cin>>a[i];
        
        ct=0;
        mergesort(0,n-1);
        cout<<ct<<endl;
    }
	return 0;
}