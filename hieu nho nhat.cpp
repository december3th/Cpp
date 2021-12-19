#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)   for(int i = a;i < b;i++)
#define rFOR(i,a,b)  for(int i = a;i >= b;i--)
long long sto(string a)
{
	long long s = 0;
	FOR(i,0,a.size())	s= s*10+(a[i]-48);
	return s;
}
main()
{
	int n,k;
	cin >> n>> k;

	int a[k];
	FOR(i,0,k)	a[i]=i+1;
	string s[n];
	set<long long>as;
	set<string> tmp;
	string tmp2="";
	for(int i = 0;i < n;i++)
	{
		cin >> s[i];
		tmp.insert(s[i]);
	}
	long long  h = sto(*tmp.rbegin())-sto(*tmp.begin());
	as.insert(h);
	tmp.clear();
	while(next_permutation(a,a+n))
	{
		FOR(i,0,n)
		{
			FOR(j,0,k)	tmp2+=s[i][a[j]];
			tmp.insert(tmp2);
			tmp2="";
		}
		h = sto(*tmp.rbegin())-sto(*tmp.begin());
		as.insert(h);
		tmp.clear();
	};
	cout << *as.begin();
}
