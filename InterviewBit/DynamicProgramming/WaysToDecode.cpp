int Solution::numDecodings(string A) {
    
    int n=A.length();
    if(A[0]=='0')
        return 0;
    int t[n+1];
    t[0]=1;
    t[1]=1;
    
    for(int i=2;i<=n;i++){
        t[i]=0;
        if(A[i-1]>'0')
            t[i] = t[i-1];
        if(A[i-2]=='1' || (A[i-2]=='2' && A[i-1]<'7'))
            t[i]+=t[i-2];
    }
    return t[n];
}
