int Solution::anytwo(string A) {
    
   int n=A.length();
   int t[n+1][n+1];
   
   for(int i=0;i<=n;i++){
       for(int j=0;j<=n;j++){
           if(i==0||j==0)
            t[i][j]=0;
            else
            if(A[i-1]==A[j-1] && i!=j)
                t[i][j] = 1+t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            if(t[i][j]>=2) return 1;
       }
   }
   return 0;
}