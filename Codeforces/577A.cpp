#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	string s[n];
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		s[i] = a;
		// cout<<s[i]<<endl;
	}
	int b[m];
	for(int i=0;i<m;i++) cin>>b[i];

	int freq[5];
	for(int i=0;i<5;i++) freq[i]=0;
	int ans=0;
	
	for(int i=0;i<m;i++)
	{
		for(int i=0;i<5;i++) freq[i]=0;

		for(int j=0;j<n;j++)
		{
			freq[s[j][i]-'A']++;
			
		}
		int maxfreq=0;
		for(int i=0;i<5;i++)
			maxfreq = max(maxfreq,freq[i]);

		ans += maxfreq*b[i];
	}
	cout<<ans;
}