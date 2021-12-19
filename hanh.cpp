#include <bits/stdc++.h>
using namespace std; 
bool a[1000000001];
void ssnt()
{
	a[0]=false;
	a[1]=false;
	for(int i = 2;i<1000000001;i++)
	{
		a[i]=true;
	}
	for(int i = 2;i <1000000001;i++)
	{
		if(a[i]==true)
		{
			for(int j = i+i;j <1000000001;j+=i)
			{
				a[j]=false;
			}
		}
	}
 } 
main() 
{
	long long t,n;
	cin >> t;
	ssnt(); 
	while(t--)
	{
		cin >> n ; if (a[n] == true) cout << "YES";
		else cout << "NO";
		cout << endl;
	} 
}

