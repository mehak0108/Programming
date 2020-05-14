#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);


int main()
{
    ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=2)
        {
            cout<<"YES"<<endl; continue;
        }
        map<ll, vector<pair<ll,ll>> > mp;
        for(int i=0; i<n; i++)
        {
            ll l,r,v;
            cin>>l>>r>>v;
            mp[v].push_back({l,r});
        }
        bool fl=true,fl1=true;
        for(auto it = mp.begin(); it!=mp.end(); it++)
        {
            auto speed = it->first;
            auto v = it->second;
            int z = v.size();
            if(v.size()>=3)
            {
                sort(v.begin(), v.end());
                pair<ll, ll>cmn;
                cmn = v[0];
                int ct=1;
                for(int i=1; i<v.size(); i++)
                {
                    if(cmn.second > v[i].first)
                    {
                        ct++;
                        // if(cmn.second > v[i].first)
                        // {
                        //     ct=2;
                            cmn = {v[i].first, cmn.second};
                            // fl1 = false;
                        // }

                    }
                    // else if(cmn.second == v[i].first)
                    // {
                    //     ct++;
                    // }
                    else if(cmn.second < v[i].first)
                    {
                        cmn=v[i]; ct=1;
                    }

                    if(v[i].first==cmn.second)
                        ct++;
                    cout<<cmn.first<<" "<<cmn.second<<endl;
                    if(i<z-2 && v[i].second==v[i+1].first && v[i].second==v[i+2].first)
                    {
                        fl=false;
                        cout<<"NO"<<endl; 
                        break;
                    }
                    if(ct>=3)
                    {
                        fl=false;
                        cout<<"NO"<<endl; 
                        break;
                    }
                }
            }
            if(!fl)
                break;
        }

        if(fl)
            cout<<"YES"<<endl;

    }
}
