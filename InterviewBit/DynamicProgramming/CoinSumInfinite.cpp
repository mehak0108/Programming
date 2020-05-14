int Solution::coinchange2(vector<int> &A, int B) {
    
    long long n=A.size(), sum=B;
    
    if(n<=0)
        return 0;
        
    
    long long t[n+1][sum+1];
    
    for(long long i=0;i<=n;i++)
        t[i][0] = 1;
    for(long long j=0;j<=sum;j++)
        t[0][j]=0;
        
    for(long long i=1;i<=n;i++ ){
        for(long long j=1;j<=sum;j++){
                if(A[i-1]>j)
                    t[i][j] = t[i-1][j];
                else
                    t[i][j] = (t[i-1][j]+t[i][j-A[i-1]])%1000007;
            cout<<t[i][j]<<" ";  
        }
        cout<<endl;
    }
    //return int(t[n][sum]%1000007);
}
