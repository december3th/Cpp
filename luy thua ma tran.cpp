#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
const int MOD = (int) 1e9+7;
int n,k;
struct MATRIX
{
	ll a[10][10];
};
MATRIX operator * (MATRIX A,MATRIX B)
{
	MATRIX C;
	FOR(i,0,n)
	{
		FOR(j,0,n)
		{
			C.a[i][j] = 0;
			FOR(k,0,n)
			{
				C.a[i][j]=(C.a[i][j]+(A.a[i][k]*B.a[k][j])%MOD)%MOD;
			}
		}
	}
	return C;
}
MATRIX powerMOD(MATRIX A,int k)
{
	if(k==1) 	return A;
	MATRIX tmp = powerMOD(A,k/2);
	if(k%2==1)	return tmp*tmp*A;
	else return tmp*tmp; 
}
main()
{
	tester()
	{
		MATRIX A;
		cin >> n >> k;
		FOR(i,0,n)
		{
			FOR(j,0,n)	cin >> A.a[i][j];
		}
		MATRIX tmp = powerMOD(A,k);
		ll as = 0;
		FOR(i,0,n)	as= (as+tmp.a[i][n-1])%MOD;
		cout << as<<endl;
	}
}
