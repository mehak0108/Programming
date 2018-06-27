#include <iostream>
#include <algorithm>
using namespace std;

int editDist(string s1, string s2, int a,int b){
    int dp[a+1][b+1];
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if(i==0)
                dp[i][j] =j;
            else
                if(j==0)
                    dp[i][j] =i;
                else
                    if(s1[i-1] == s2[j-1])
                        dp[i][j] = dp[i-1][j-1];
                    else
                        dp[i][j] = 1 + min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]));
        }
    }
    /*if(a==0)
        return b;
    if(b==0)
        return a;
    if(s1[a-1] == s2[b-1])
        return editDist(s1,s2,a-1,b-1);
    return 1+min(editDist(s1,s2,a,b-1),min(editDist(s1,s2,a-1,b),editDist(s1,s2,a-1,b-1)));*/
    return dp[a][b];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<editDist(s1,s2,s1.length(),s2.length())<<endl;;

    }
}
