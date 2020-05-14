int Solution::findMedian(vector<vector<int> > &a) {
    
    int n=a.size(),m=a[0].size();
    int cmin=INT_MAX, cmax = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        cmin=min(cmin,a[i][0]);
        cmax=max(cmax,a[i][m-1]);
    }
    
    int req = (n*m+1)/2;
    while(cmin<=cmax)
    {
        int mid = cmin+(cmax-cmin)/2;
        int ct=0;
        for(int i=0;i<n;i++)
            ct+= upper_bound(a[i].begin(),a[i].end(),mid)-a[i].begin();
        
        if(ct<req)
            cmin = mid+1;
        else
            cmax = mid-1;
        
    }
    
    return cmin;
    
}