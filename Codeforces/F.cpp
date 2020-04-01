#include <bits/stdc++.h>
using namespace std;
string res;

bool check(string t)
{
	for(int i=0;i<t.length()-1;i++)
	{
		if(abs(t[i]-t[i+1])==1)
			return false;
	}
	return true;
}
void util(string tmp,int l,int r,string s)
{

    if(tmp.length()==s.length())
    {
        if(check(tmp))
        	res = tmp;
        return;
    }
    
    for(int i=l;i<=r;i++)
    {
        tmp.push_back(s[i]);
        swap(s[l],s[i]);
        util(tmp,l+1,r,s);
        swap(s[l],s[i]);
        tmp.pop_back();
    }
   
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;

		int l = s.length();
		string tmp;
		res = "";

		util(tmp,0,l-1,s);

		if(res=="")
		{
			cout<<"No answer"<<endl;
			continue;
		}
		cout<<res<<endl;
	}
}
