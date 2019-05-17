int Solution::solve(int A) {
    
    long long color3=24, color2=12;
    
    for(int i=2;i<=A;i++){
        long long temp = color3;
        color3 = (10*color2 + 11*color3)%1000000007;
        color2 = (7*color2 + 5*temp)%1000000007;
    }
    return int(color3+color2)%1000000007;
}
