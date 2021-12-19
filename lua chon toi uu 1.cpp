#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
#define mod 1000000007
bool cmp(pair<int,int> a , pair<int,int> b)
{
	return a.second<b.second;
}
void xuly(pair<int,int>a[],int n)
{
	sort(a,a+n,cmp);
	int kq=1,j=0;
	FOR(i,1,n)
	{
		if(	a[i].first>=a[j].second)
		{
			kq++;
			j=i;
		}
	}
	cout << kq<<endl;
}
main()
{
	pair<int,int>a[100005];
	int n;
	tester()
	{
		cin >> n;
		FOR(i,0,n)	cin >> a[i].first>>a[i].second;
		xuly(a,n);
	}
}
