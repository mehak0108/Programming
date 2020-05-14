#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
        int freq[26];
        unordered_set<char> us;
        
        for(int i=0;i<n;i++) us.insert(s[i]);
        
        for(int i=0;i<26;i++) freq[i]=0;
        
        int i=0,j=0;
        freq[s[i]-'a']++;
        
        int minl=INT_MAX,ct;
        
        while(i<n && j<n)
        {
            ct=0;
            for(int k=0;k<26;k++)
            {
                if(freq[k]>=1)
                    ct++;
            }
            
            if(ct==us.size())
            {
                minl = min(minl,j-i+1);
                freq[s[i]-'a']--;
                i++;
            }
            else
            {
                j++;
                if(j<n)
                    freq[s[j]-'a']++;
            }
        }
        
        cout<<minl<<endl;
    }
	return 0;
}