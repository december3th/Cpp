#include <bits/stdc++.h>
using namespace std; 
bool a[1000001];
void ssnt()
{
	a[0]=false;
	a[1]=false;
	for(int i = 2;i<1000001;i++)
	{
		a[i]=true;
	}
	for(int i = 2;i <1000001;i++)
	{
		if(a[i]==true)
		{
			for(int j = i+i;j <1000001;j+=i)
			{
				a[j]=false;
			}
		}
	}
 } 
main() 
{ 
	long long t;
	ssnt();
	cin >>t;
	while(t--) 
	{
		long long m,n;
		cin >> m>>n;
		long long k = sqrt(m);
		if(k*k<m)	k+=1;
		int dem = 0; 
		for(int i = k;i <= sqrt(n);i++)
		{
			if(a[i]==true)
			{
				dem++; 
			} 
		}
		cout <<dem <<endl; 
	} 
}

