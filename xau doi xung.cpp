#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;++i)
#define rFOR(i,a,b) for(int i = a;i >= b;--i)
#define tester()	int t;cin >> t;while(t--)
const int MOD = (int) 1e9+7;
int n;
int *a,*b;
string s;
int D()
{
	a = new int [n+1];
	b = new int [n+1];
	int *c;
	memset(a,0,(n+1)*sizeof(int));
	memset(b,0,(n+1)*sizeof(int));
	a[n-1]=1;
	rFOR(i,n-1,0)
	{
		b[i]=1;
		FOR(j,i+1,n)
		{
			b[j]=(s[i]==s[j]) ? a[j-1]+2 
				:	max(b[j-1],a[j]);
		}
			c = a;a = b;b = c;
	}

	int tmp = a[n-1];
	delete[] a;
	delete[] b;
	return tmp;
}
main()
{
	tester()
	{
		cin >> s;
		n=s.length();
		cout << n-D()<<endl;
	}
}
