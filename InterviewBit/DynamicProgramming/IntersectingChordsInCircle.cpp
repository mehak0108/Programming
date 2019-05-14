int Solution::chordCnt(int n) {
        
    long long int t[n+1];
    t[0]=1;
    t[1]=1;
    t[2]=2;
    for(int i=3;i<=n;i++){
        t[i]=0;
        for(int j=0;j<i;j++){
            t[i] = (t[i]+t[j]*t[i-j-1])%1000000007;
        }
    }
    return t[n]%1000000007;
    
}
