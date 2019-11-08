#include <bits/stdc++.h>
using namespace std;
#define pci pair<char,int>
#define F first
#define S second

int main()
{
	string s = "dfgfsfaaaaaaaafffgg";
	int k = 4;
	stack<pci>tmp;
	tmp.push({s[0],1});

	for(int i=1;i<s.length();i++)
	{
		if(!s.empty())
		{
			auto tp = s.top();
			s.pop();
			if(s[i]==tp.F)
				
		}
	}
}
