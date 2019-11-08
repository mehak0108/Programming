vector<int>adj[28];
int vis[28];
stack<int>st;

class Solution {
public:
    bool detectcyc(int s)
    {
        vis[s]=1;
        bool ret = false;
        for(auto v:adj[s])
        {
            if(vis[v]==1)
                return true;
            else 
                ret |= detectcyc(v);
        }
        
        vis[s]=2;
        return ret;
    }
    
    void dfs(int s)
    {
        vis[s]=1;
        for(auto v:adj[s])
        {
            if(!vis[v])
                dfs(v);
        }
        st.push(s);
    }
    
    string alienOrder(vector<string>& A) {
        
        string ans;
        st.empty();
        
        for(int i=0;i<26;i++) 
            adj[i].clear();
        for(int i=0;i<26;i++) vis[i]=0;
        
        int n = A.size();
        
        if(n==1)
            return A[0];
        
        unordered_set<char>us;
        
        for(int i=0;i<n-1;i++)
        {
            string s1 = A[i];
            string s2 = A[i+1];
            
            for(int k=0;k<s1.length();k++) us.insert(s1[k]);
            for(int k=0;k<s2.length();k++) us.insert(s2[k]);
            
            
            for(int j=0;j<min(s1.length(),s2.length());j++)
            {
                if(s1[j]!=s2[j])
                {
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        
        bool fl = false;
        for(int i=0;i<26;i++)
        {
            if(!vis[i] && adj[i].size()>0) 
                fl |= detectcyc(i);
            if(fl)
                return ans;
        }
        
        for(int i=0;i<26;i++) vis[i]=0;
        
        for(int i=0;i<26;i++)
        {
            if(!vis[i] && adj[i].size()>0)
                dfs(i);
        }
        
        while(!st.empty())
        {
            char l = st.top()+'a';
            st.pop();
            ans += l;
            
        }
        for(int i=0;i<ans.size();i++)
        {
            if(us.find(ans[i])!=us.end())
                us.erase(ans[i]);
        }
        
        for(auto it=us.begin();it!=us.end();it++)
        {
            ans += (*it);
        }
        return ans;
        
    }
};