#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define rFOR(i,a,b) for(int i = a;i >= b;i--)
#define tester()	int t;cin >> t;while(t--)
const int MOD = (int) 1e9+7;
main()
{
	string s;
	cin >> s;
	string as= "";
	char max;
	int dot = 0;
	while(dot!=s.size())
	{
		max = 0;
		map<char,int>s1;
		long long tmp;
		FOR(i,dot,s.size())
		{
			s1[s[i]]++;
			if(s[i]>=max)
			{
				max = s[i];
				tmp = i;
			}
		}
		auto it = *s1.rbegin();
		FOR(i,0,it.second)
		{
			as+=it.first;
		}
		dot=tmp+1;
	}
	cout << as;
}
