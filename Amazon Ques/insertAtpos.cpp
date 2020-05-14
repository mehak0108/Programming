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

int main()
{
	vi vec{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };

	vec.insert(vec.begin()+4,9);

	for(int i=0;i<vec.size();i++)
		cout<<vec[i]<<" ";
}