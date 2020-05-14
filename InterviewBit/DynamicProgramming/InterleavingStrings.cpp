int Solution::isInterleave(string A, string B, string C) {
    
    int m=A.length(),n=B.length(),p=C.length();
    
    if(m+n!=p)
        return 0;
    bool t[m+1][n+1];
    
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
            t[i][j]=false;
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                
                if(i==0 && j==0)
                    t[i][j] = true;
                else
                    if(i==0 && B[j-1]==C[i+j-1])
                        t[i][j] = t[i][j-1];
                    else
                        if(j==0 && A[i-1]==C[i+j-1])
                            t[i][j] = t[i-1][j];
                        else
                            
                            if(A[i-1]==C[i+j-1]  && B[j-1]!=C[i+j-1])
                                t[i][j] = t[i-1][j];
                            else
                                if(B[j-1]==C[i+j-1]  && A[i-1]!=C[i+j-1])
                                    t[i][j] = t[i][j-1];
                                else
                                    if(A[i-1]==C[i+j-1] && B[j-1]==C[i+j-1])
                                        t[i][j] = t[i-1][j] || t[i][j-1];
                                }
                            }
                            return t[m][n];
                        }
