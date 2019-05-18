vector<vector<int> > Solution::queenAttack(vector<string> &A) {
    
    int m=A.size(), n=A[0].size();
    vector<int> v(n);
    vector<vector<int>>ans(m,v);
    int x[8]={1,1,0,-1,-1,-1,0,1};
    int y[8]={0,-1,-1,-1,0,1,1,1};
    int t[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            t[i][j]=0;
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]=='1'){
                for(int k=0;k<8;k++){
                    int ti = i+x[k];
                    int tj = j+y[k];
                    
                    while(ti>=0 && tj>=0 && ti<m && tj<n){
                        t[ti][tj]++;
                        if(A[ti][tj]=='1') break;
                        ti+=x[k];
                        tj+=y[k];
                    }
                }
                
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=t[i][j];
        }
    }
    return ans;
}
