int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    
    int m=A.size(),n=A[0].size();
    
    int t[m+1][n+1];
    
    if(A[0][0]==1)
        return 0;
    if(A[0][0]==0 && m==1 && n==1)
        return 1;
    
    t[0][0] =0;
    
    for(int i=0;i<=m;i++)
        t[i][0]=0;
    for(int j=0;j<=n;j++)
        t[0][j]=0;
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            //t[i][j]=0;
            if(i==1 && j==1){
                if(A[i-1][j-1]==1) t[i][j]=0;
                else t[i][j] = 1;
            }
            else
                if(A[i-1][j-1]==1)
                    t[i][j]=0;
                else
                    t[i][j] = t[i-1][j]+t[i][j-1];
        }
    }
    return t[m][n];
}
