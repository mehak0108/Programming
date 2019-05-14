int Solution::isMatch(const string A, const string B) {
    
    int m=A.length(),n=B.length(),ct=0;

    /*if (m == 0) 
        return (n == 0);
    for(int i=0;i<n;i++){
        if(B[i]!='*')
            ct++;
    }
    if(ct>m)
        return 0;*/
        
    bool t[m+1][n+1];
    //memset(t,false,sizeof(t[0][0])*m*n);
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++)
            t[i][j] = false;
    }
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 && j==0)
                t[i][j] =true;
            else
                if(B[j-1]=='*' && i==0)
                    t[i][j] = t[i][j-1];
                else
                    if(B[j-1]=='*')
                        t[i][j] = t[i-1][j]||t[i][j-1];
                    else
                        if((A[i-1]==B[j-1]) || B[j-1]=='?')
                            t[i][j] = t[i-1][j-1];
                        else
                            t[i][j] = false;
                        
        }
    }
    return t[m][n];
}
