#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

int solve(char *s,int k)
{
	int ct=0,i;
	for(i=0;i<k;i++)
	{
		// cout<<s[i];
		if(s[i]==' ')
			ct++;
	}

	// cout<<i<<endl;
	i--;
	while(i>=0 && s[i]==' ')
	{
		ct--;
		i--;
	}

	int j=0;
	while(j<k && s[j]==' ')
	{
		ct--;
		j++;
	}
	// cout<<j<<endl;
	int newl = i-j+1+(2*ct);
	cout<<newl<<endl;

	int ind = newl-1;
	// s[ind--]='\0';

	for(int k=i;k>=j;k--)
	{
		if(s[k]==' ')
		{
			s[ind--] = '0';
			s[ind--] = '2';
			s[ind--] = '%';
		}
		else
		{
			s[ind--]=s[k];
			// ind--;
		}
	}
	
	return newl;
}
int main()
 {
	//code
	// ONLINE_JUDGE
	int t;
	// cin>>t;
	t=1;
	while(t--)
	{
		char s[1000] = "  Mr John Smith   ";
		int k; 
		// cin>>k;
		k = 18;

		int newl = solve(s,k);

	   //  string s;
	   //  cin.ignore();
	   //  getline(cin,s);
	   //  cin.ignore();
	   //  int k;
	   //  cin>>k;
	   //  string ans;
	   //  int j=0;
	   //  for(int i=0;i<s.length();i++)
	   //  {
	   //      j=i;
	   //      while(j<s.length() && s[j]!=' ')
	   //      {
	   //          ans += s[j];
	   //          j++;
	   //      }
	   //      if(j!=s.length())
	   //      	ans += "%20";
	   //      i=j;
	   //  }
	    
	   // // cout<<ans<<endl;
	   //  // ans.pop_back()
	   // for(int i=0;i<ans.length();i++)
	   //      cout<<ans[i];

		for(int i=0;i<newl;i++)
			cout<<s[i];
	   cout<<endl;
	}
	// return 0;
}