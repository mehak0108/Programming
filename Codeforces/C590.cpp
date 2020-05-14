#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[2][n];
		for(int i=0;i<2;i++)
		{
			string s;
			cin>>s;
			for(int j=0;j<n;j++)
				a[i][j] = s[j]-'0';
		}

		int cur=0;
		bool fl = false;
		for(int i=0;i<n;i++)
		{
			if(a[cur][i]>2)
			{
				if(a[1-cur][i]<=2)
				{
					// cout<<"NO"<<endl;
					fl = true;
					break;
				}
				cur = 1-cur;
			}
		}
		if(!fl && cur==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
