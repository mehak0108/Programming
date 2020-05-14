#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100001

int main(){
	//ONLINE_JUDGE
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int i=0;
		while(s[i]!='8' && i<n)
			i++;

		if(n-i>=11)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
		
	}
}