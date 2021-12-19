#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin >>t;while(t--)
#define FOR(i,a,b)	for(int i = a;i < b;i++)

main()
{
	int t; cin >> t ;
	long long tu , mau ;while(t--) 
	{
	 cin >> tu >> mau;
		long long res;
		while (1) {
			if (mau % tu == 0) {
				cout << "1/" << mau/tu << "\n";
				break;
			}
			else {
				res = mau/tu + 1;
				cout <<"1/" << res << " + ";
				tu = tu * res - mau;
				mau = mau * res;
			}
		}
	}
	return 0;
}   
