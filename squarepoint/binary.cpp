#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define F first
#define S second

int main()
{
	ONLINE_JUDGE
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.length();
		int freq[2];
		// freq[0]=0;
		// freq[1]=0;

		vector<pair<int,int>> v;
		for(int i=0;i<n;i++)
		{
			freq[0]=0;
			freq[1]=0;
			for(int j=i;j<n;j++)
			{
				freq[s[j]-'0']++;
				// for(int k=0;k<2;k++)
				// {
					if(freq[0]==freq[1])
					{
						v.push_back({i,j});
						// cout<<i<<" "<<j<<endl;
					}
				// }
			}

		}

		bool fl;
		int ct=0;
		for(int i=0;i<v.size();i++)
		{
			fl = true;
			int st = v[i].F;
			int ed = v[i].S;
			int mid = (st+ed)/2;
			int val = s[st]-'0';
			for(int k=st;k<=mid;k++)
			{
				if(s[k]-'0'!=val)
				{
					fl = false;
					break;
				}
			}

			if(!fl) continue;

			// for(int k=mid+1;k<=ed;k++)
			// {
			// 	if(s[k]-'0'!=(1-val))
			// 	{
			// 		fl = false;
			// 		break;
			// 	}
			// }
			// if(!fl) continue;
			if(fl)
				ct++;
		}
		cout<<ct<<endl;
	}
}