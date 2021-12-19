#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
const int MOD = (int) 1e9+7;
int a[2000000];
main()
{
	tester()
	{
		ll n;
		cin >> n;
		FOR(i,0,n)	cin >> a[i];
		priority_queue<ll,vector<ll>,greater<ll>>wire(a,a+n);
		ll k;
		ll as= 0,first,second;
		while(wire.size()>1)
		{
			first=wire.top();wire.pop();
			second=wire.top();wire.pop();
			as=(as+first+second)%MOD;
			wire.push((first+second)%MOD);
		}
		cout << as << endl;
	}
}
