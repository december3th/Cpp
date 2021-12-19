#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
const int MOD = (int) 1e9+7;
main()
{
	tester()
	{
		int n;ll k;
		cin >> n >> k;
		int count = 1;
		while(k%2==0)
		{
			count++;
			k/=2;
		}
		cout << count <<endl;
	}
}
