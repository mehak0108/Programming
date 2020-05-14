int Solution::longestSubsequenceLength(const vector<int> &A) {
    
    int n = A.size();
    int lis[n],lds[n];
    for(int i=0;i<n;i++){
        lis[i]=1;
        lds[i]=1;
    }
        
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(A[j]<A[i] && lds[i]<lds[j]+1)
                lds[i]=lds[j]+1;
        }
    }
    
    int ans = lds[0]+lis[0]-1;
    for(int i=0;i<n;i++){
        ans = max(ans,lds[i]+lis[i]-1);
    }
    return ans;
}
