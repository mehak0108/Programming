int Solution::minDistance(string A, string B) {
    
    int m = A.length(), n = B.length();
    int t[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0)
                t[i][j]=j;
            else if(j==0)
                    t[i][j]=i;
            else if
            if(A[i-1]==B[j-1])
                t[i][j]=t[i-1][j-1];
            else
                t[i][j] = 1 + min(t[i-1][j],min(t[i][j-1],t[i-1][j-1]));
        }
    }
}
