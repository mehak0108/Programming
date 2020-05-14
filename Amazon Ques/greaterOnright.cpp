#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        int rght[n];
        rght[n-1] = a[n-1];
    
        for(int i=n-2;i>=0;i--)
        {
            rght[i] = max(rght[i+1],a[i]);
        }
        
        for(int i=0;i<n-1;i++)
        {
            cout<<rght[i+1]<<" ";
        }
        cout<<-1<<endl;
    }
	return 0;
}