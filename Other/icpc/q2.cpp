#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

int main()
{
    ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_set<string>st;
        vector<pair<string,bool>>p;
        for(int i=0;i<n;i++)
        {
            bool x;
            string s;
            cin>>s>>x;
            // st.insert(s);
            p.push_back({s,x});
            // p[i] = ;
        }

        map<pair<string,bool>,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[p[i]]++;
        }

        // vector<pair<string,int>>vec;
        unordered_map<string,int>m;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            auto x = it->first;
            int y = it->second;
            string tmp = x.first;
            if(st.find(tmp)==st.end())
            {
                // vec.push_back({tmp,y});
                st.insert(tmp);
                m[tmp] = y;
            }
            else
            {
                int prev = m[tmp];
                m[tmp] = max(y,prev);
            }

        }

        long long ans=0;
        for(auto it=m.begin();it!=m.end();it++)
            ans += it->second;
        cout<<ans<<endl;

    }
}
