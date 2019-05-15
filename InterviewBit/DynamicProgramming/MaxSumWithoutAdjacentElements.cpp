int Solution::adjacent(vector<vector<int> > &A) {
    
    int n = A[0].size();
    if(n==0)
        return 0;
        
    int incl=max(A[0][0],A[1][0]),excl=0,exclnew;
    
    for(int i=1;i<n;i++){
        exclnew = max(incl,excl);
        incl = excl + max(A[0][i],A[1][i]);
        excl = exclnew;
    }
    
    return max(incl,excl);
}
