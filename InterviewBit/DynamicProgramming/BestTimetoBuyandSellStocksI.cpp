int Solution::maxProfit(const vector<int> &A) {
    
    int n=A.size();
    if(n==0)
        return 0;
    int min_element = A[0];
    int diff = A[1]-A[0];
    
    for(int i=0;i<A.size();i++){
        if(diff< A[i]-min_element)
            diff = A[i]-min_element;
        if(A[i]<min_element)
            min_element = A[i];
    }
    //return diff;
    return diff;
}
