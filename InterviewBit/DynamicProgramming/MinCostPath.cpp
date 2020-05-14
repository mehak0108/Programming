int Solution::minPathSum(vector<vector<int> > &A) {
    
    int m=A.size(), n = A[0].size();
    
    int t[m+1][n+1];
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
           
            if(i==0 || j==0)
                t[i][j] = INT_MAX;
            else
                if(i==1 && j==1)
                    t[i][j] = A[i-1][j-1];
                else
                    t[i][j] = A[i-1][j-1] + min(t[i-1][j],t[i][j-1]);
        }
    }
    return t[m][n];
}
