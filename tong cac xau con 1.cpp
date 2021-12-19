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
		string n;
		cin >> n;
		ll s = 0;
		FOR(i,1,n.size()+1)
		{
			FOR(j,0,n.size()-i+1)
			{
				s+=stol(n.substr(j,i));
			}
		}
		cout << s<<endl;
	}
}
