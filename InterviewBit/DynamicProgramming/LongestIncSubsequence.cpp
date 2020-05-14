int Solution::lis(const vector<int> &A) {
    
    int n=A.size();
    int lis[n];
    for(int i=0;i<n;i++)
        lis[i]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i]&&lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    return *max_element(lis,lis+n);
}