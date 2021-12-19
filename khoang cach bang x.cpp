
#include <algorithm> 
#include<iostream>
using namespace std;
main () {
	int k;
	cin >> k;
	while ( k--) {
		int n,x;
		cin >> n >> x;
		int a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		int as = -1 ;
		sort(a,a+n);
		for(int i = 0;i <n;i++)
		{
			if(binary_search(a+1,a+n,x+a[i]))
			{
				as=1;
				break;
			}
		}
		cout << as<<endl;
	}
}
