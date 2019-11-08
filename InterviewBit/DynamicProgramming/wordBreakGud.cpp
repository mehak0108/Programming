using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         set<string> dict;
         for(int i=0;i<n;i++)
         {
             string s;
             cin>>s;
             dict.insert(s);
         }
         string s ;
         cin>>s;
         n = s.size();
         int dp[n+1];
         for(int i=0;i<=n;i++) dp[i] = 0;
         dp[0] = 1;
         bool ans = 0;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=i;j++)
             {
                 dp[i] |= dp[i-j]&(dict.find(s.substr(i-j,j))!=dict.end());
             }
             ans |= dp[i];
         }
         cout<<dp[n]<<endl;
         
         
     }
      
     
     
     
	//code
	return 0;
}