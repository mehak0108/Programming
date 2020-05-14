#include<bits/stdc++.h>
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
        vector<int>ans,res;
        
        int i=0,j=n-1;
        int ct=0;
        bool fl=false;
        
        while(i<j)
        {
            if(i==j)
            {
                fl = true;
                break;
            }
            if(a[i]==a[j])
            {
                ans.push_back(a[i]);
                i++;
                j--;
            }
            else
            {
                if(a[i]<a[j])
                {
                    i++;
                    // if(i)
                        a[i]+=a[i-1];
                    ct++;
                }
                else
                {
                    j--;
                    // if(j>=0)
                        a[j]+=a[j+1];
                    ct++;
                }
            }
            if(i==j)
            {
                fl = true;
                break;
            }
        }
        
        if(fl)
        {
            int p = ans.size();
            for(int i=0;i<p;i++)
            {
                res.push_back(ans[i]);
            }
            
            for(int i=ans[p-2];i>=0;i--)
                res.push_back(ans[i]);
        }
        else
        {
            int p = ans.size();
            for(int i=0;i<p;i++)
            {
                res.push_back(ans[i]);
            }
            
            for(int i=ans[p-1];i>=0;i--)
                res.push_back(ans[i]);
        }
        
        cout<<ct<<endl;
    
    }
	return 0;
}