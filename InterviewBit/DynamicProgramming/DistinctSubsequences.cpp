int Solution::numDistinct(string A, string B) {
    
    int m = A.length(), n=B.length();
    
    int t[m+1][n+1];
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 && j!=0)
                t[i][j] = 0;
            else
            if(j==0)
                t[i][j] = 1;
            else
                if(A[i-1]==B[j-1])
                    t[i][j] = t[i-1][j-1]+t[i-1][j];
                else
                    t[i][j] = t[i-1][j];
        }
    }
    return t[m][n];
}
