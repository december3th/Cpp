#include<bits/stdc++.h>
using namespace std;
struct tt {
	string  a , name;
	long long money;
	long long money1;
};
tt ds ;
main () {
	cin >> ds.a;
	scanf("\n");
	getline(cin,ds.name);
	cin >> ds.money;
	int x;
	long long c;
	if (ds.a[2] == '0') {
		x = (ds.a[3] - '0');
	} 
	else x = stoll(ds.a.substr(2,3));
	if (ds.a.substr(0,2) == "HP") {
		c =  900000;
	}
	else if (ds.a.substr(0,2) == "HT") {
		c = 2000000;
	}
	else if (ds.a.substr(0,2) == "GV") {
	    c = 500000;
	}
	long long k = ds.money * x+ c;
	cout << ds.a << " " << ds.name << " " << x << " "<< c << " " << k ;
}
