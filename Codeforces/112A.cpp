#include <iostream>
#include <string>
#define ONLINE_JUDGE  freopen("../input","r",stdin); freopen("../output","w",stdout);
using namespace std;

void makelow(string &s, int n)
{
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a')
			s[i] = s[i]-32;
	}
	// cout<<s<<"   ok"<<endl;
}
void solve()
{
	string a,b;
	cin>>a>>b;

	int n = a.length();
	bool fir=false, sec=false;
	bool ans = true;
	makelow(a,n);
	makelow(b,n);
	for(int i=0;i<n;i++)
	{
		if(a[i]-b[i]==0)
			continue;
		else
		{
			if(a[i]<b[i])
			{
				sec = true;
				break;
			}
			else
			{
				fir = true;
				break;
			} 
		}
	}

	if(fir)
		cout<<1<<endl;
	else if(sec)
		cout<<-1<<endl;
	else
		cout<<0<<endl;
}

int main()
{
	// ONLINE_JUDGE
	int t;
	t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	
}