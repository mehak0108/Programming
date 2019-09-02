#include <bits/stdc++.h>
using namespace std;

struct trie
{
	trie *child[26];
	bool end;
	int weight;

	trie(int wt)
	{
		for(int i=0;i<26;i++)
			child[i] = NULL;
		weight = wt;
		end = false;
	}
};

void add(trie *head, string s, int wt)
{
	trie *curr = head;
	for(int i=0;i<s.length();i++)
	{
		int ind = s[i]-'a';
		if(!curr->child[ind])
		{
			curr->child[ind] = new trie(wt);
		}
		
		curr = curr->child[ind];
		if(curr->weight < wt)
			curr->weight = wt;
	}
	curr->end = true;
}

int search(trie *head, string p)
{
	trie *curr = head;
	for(int i=0;i<p.length();i++)
	{
		int ind = p[i]-'a';
		if(!curr->child[ind])
			return -1;
		
		curr = curr->child[ind];
		
	}
	return curr->weight;
}

int main()
{
	int n,q;
	cin>>n>>q;
	trie *head = new trie(-1);

	while(n--)
	{
		string s;
		int wt;
		cin>>s>>wt;
		add(head,s,wt);
	}

	while(q--)
	{
		string p;
		cin>>p;
		cout<<search(head,p)<<endl;
	}
}