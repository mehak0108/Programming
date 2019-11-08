#include <bits/stdc++.h>
// #pragma GCC optimize ("Ofast")
// #pragma GCC target ("sse4")
// #pragma GCC optimize ("unroll-loops")
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 		100001
#define ll          long long
#define ld          long double
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
using namespace std;

map<int,bool> mp;

class screen
{
	public:
		int col,row;
		int A[50][50] = {{0}};

		// // bool reserve(int r,vector<string>arr){

  // //       for(int i=3;i<arr.size();i++ ){
  // //           if(A[r][stoi(arr[i])-1]==1)return false;
  // //           else A[r][stoi(arr[i])-1]=1;
  // //       }
  // //       return true;
  //   }
	
};

int main()
{
	ONLINE_JUDGE

	int n;
	cin>>n;
	cin.ignore();

	screen obj[5];
	

	while(n--)
	{
		string s,item;
		// string s,out;
		vector<string> tok;
    	
    	getline(cin,s);
    	// cout<<s<<endl;
    	stringstream ss(s);
  //   ss<<s;
  //   while(ss>>out)
  //   {
  //   	tok.pb(out);
  //       cout<<out<<endl;
  //   }
		// cin.ignore();

		// getline(cin,s);
		

		// cout<<s<<endl;
		// stringstream ss(s);

		// vector<string> tok;
		while(getline(ss,item,' '))
			tok.pb(item);

		for(int i=0;i<tok.size();i++)
			cout<<tok[i]<<endl;

		if(tok[0]=="add-screen")
		{
			int num = tok[1][6]-'0';
			cout<<num<<endl;

			if(mp.find(num)!=mp.end())
			{
				cout<<"failure"<<endl;
				continue;
			}
			mp[num] = true;

			int r = stoi(tok[2]);
			int c = stoi(tok[3]);

			obj[num].row = r;
			obj[num].col = c;

			for(int i=4;i<tok.size();i++)
			{
				int val = stoi(tok[i]);
				int rt = (val-1)/c;
				int ct = (val-1)%c;

				obj[num].A[rt][ct]=2;
			}

			cout<<"success"<<endl;
		}
		// else if(tok[0]=="reserve-seat")
		// {
		// 	int num = tok[1][7]-'0';

		// 	if(mp.find(num)==mp.end())
		// 	{
		// 		cout<<"f"<<endl;
		// 		continue;
		// 	}
		// 	int r = stoi(tok[2]);
		// 	if(obj[num].reserve(r-1,tok))
		// 		cout<<"success"<<endl;
		// 	else
		// 	{
		// 		// for(int i=3;i<tok.size();i++ )
  //   //         		obj[num].A[r-1][tok[i]]
		// 		cout<<"fail"<<endl;
		// 	}
		// }
		// else if(tok[0]=="get-unreserved-seats")
		// 	getUnreserved();
		// else
		// 	suggest();


	}

}

/*
9
add-screen screen1 12 10 4 5 8 9
add-screen screen2 20 25 3 4 12 13 17 18
reserve-seat screen1 4 5 6 7
reserve-seat screen2 13 6 7 8 9 10
reserve-seat screen2 13 4 5 6
get-unreserved-seats screen2 13
suggest-contiguous-seats screen1 3 3 4
suggest-contiguous-seats screen2 4 12 4
suggest-contiguous-seats screen2 4 10 3
*/