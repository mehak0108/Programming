int Solution::jump(vector<int> &a) {
    
    // O(n2) soln
    int n=a.size();
    
    if(a[0]==0 && n!=1)
        return -1;
    
    if(n<=1)
        return 0;
    
    int jumps[n];
    jumps[0]=0;
    
    for(int i=1;i<n;i++){
        jumps[i] = INT_MAX;
        for(int j=0;j<i;j++){
            if(i<=j+a[j] && jumps[j]!=INT_MAX ){
                jumps[i]=min(jumps[i],jumps[j]+1);
                break;
            }
        }
    }
    return jumps[n-1];

    //O(n)
    int n=a.size();
    if(n==1 && a[0]==0)
        return 0;
    if(a[0]==0)
        return -1;
    if(n==1)
        return 1;
    
    int maxReach = a[0];
    int jump=1;
    int step = a[0];
    
    for(int i=1;i<n;i++){
        if(i==n-1)
            return jump;
        maxReach = max(maxReach,i+a[i]);
        
        step--;
        if(step==0){
            jump++;
            if(i>=maxReach)
                return -1;
            step = maxReach-i;
        }
    }
    return -1;
}
