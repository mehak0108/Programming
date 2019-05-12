int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int m=A.size(), n=A[m-1].size();
    
    int t[m];
    
    for(int i=0;i<n;i++)
        t[i] = A[m-1][i];
    
    for(int i=m-2;i>=0;i--){
        for(int j=0;j<m;j++){
            t[j] = A[i][j]+min(t[j+1],t[j]);
        }
    }
    return t[0];
}
