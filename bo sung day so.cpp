#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin >> n;
	int k;
	map < int  , int > as;
	int dem = 0; 
	string tmp ="Excellent!\n";
	for(int i = 0;i < n;i++)
	{
		cin >> k;
		as[k]++;
	}
	auto tmp2 = *as.rbegin();
	for(int i = 1;i <= tmp2.first;i++)
	{
		if(as[i] ==0)	
		{
			 cout << i << endl;
			 dem++; 
		}
	}
	if(dem == 0)	cout << tmp ; 
}
