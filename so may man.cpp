#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
#define mod 1000000007
main()
{
	ll a,b,tmp,tmp1,tmp2,as=0;
	cin >> a>>b;
	queue<ll>luck;
	luck.push(0);
	while(1)
	{
		if(luck.front()<a)
		{
			tmp = luck.front();
			luck.pop();
			tmp1=tmp*10+4;
			tmp2=tmp*10+7;
			luck.push(tmp1);
			luck.push(tmp2);
		}
		else 
		{
			as+=luck.front()*(min(luck.front(),b)-a+1);
			a = min(luck.front(),b)+1;
			if(a>b)	break;
		}
	}
	cout << as;
}
//44*(44-40+1)+47*(47-45+1)+74*(74-48+1)+77*(77-74+1)+444*(444-78+1)+447*3+474*(474-448+1)+477*3+744*(547-478)
