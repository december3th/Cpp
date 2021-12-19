#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)   for(int i = a;i < b;i++)
#define rFOR(i,a,b)  for(int i = a;i >= b;i--)
main()
{
	char c;
	int k;
	cin >> c >> k;
	char a[k];
	char min = 'A';
	memset(a,min,k);
	while(1)
	{
		FOR(i,0,k)	cout << a[i];
		cout << endl;
		a[k-1]++;
		int as= 0;
		rFOR(i,k-1,0)
		{
			if(a[i]==c+1)
			{
				if(i==1) 	min++;
				a[i-1]++;
				memset(a+i,min,k-i+1);
			}
			if(a[i-1]!=c+1)	break;
		}
		if(min==c+1)	break;
	}
}
