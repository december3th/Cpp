#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
#define mod 1000000007
int n,m;
char a[105][105];
int dx[4] = {-1,  0, 0, 1};
int dy[4] = { 0, -1, 1, 0};
void aura(int i,int j)
{
	a[i][j] = '.';
	for(int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >=0 && i1 <n && j1 >=0 && j1 <m && a[i1][j1]=='#')
		{
			aura(i1, j1);
		}
	}
}
main()
{
	cin>>n>>m;
	FOR(i,0,n)
	{
		FOR(j,0,m)	cin >> a[i][j];
	}

	int count = 0;
	FOR(i,0,n)
	{
		FOR(j,0,m)
		{
			if(a[i][j]=='#')
			{
				count++;
				aura(i,j);
			}
		}
	}
	cout << count;
}
