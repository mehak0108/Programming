#include <bits/stdc++.h>
using namespace std;

class PrimePolynom
{
	public:
		bool isprime(int x)
		{
            if(x<2) return false;
			for(int i=2;i*i<=x;i++)
			{
				if(x%i==0)
					return false;
			}
			return true;
		}
		int reveal(int a,int b,int c)
		{
			int m=0;
			while(1)
			{
				if(!isprime(a*m*m+b*m+c))
					return m;
				m++;
			}
		}
};