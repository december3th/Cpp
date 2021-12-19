#include<iostream>
#include<algorithm>
#include<stdbool.h>
using namespace std;
bool kt(int l,int r,int &max,int a[]) {
	for(int i = l;a[i]<max;i++) if(a[i]>a[i+1])	return false;
	for(int i = r;a[i]<max;i--){
		if(a[i]>a[i-1])	return false;
	}
	return true;
}
main()
{
	int t;
	cin >>t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i = 0;i < n;i++)	
		{
			cin >> a[i];
			b[i]=a[i];
		}
		int l,r;
		cin >> l>>r;
		int *max=max_element(a+l,a+r+1);
		if(kt(l,r,*max,a))	cout <<"Yes\n";
		else cout <<"No\n";
	}
}


