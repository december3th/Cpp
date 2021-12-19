#include<bits/stdc++.h>
using namespace std;
struct tt {
	string name,work;
	long long money,day,end,money1,thuong1;
	double thuong;
};
tt ds;
main () {
	getline(cin,ds.name);
	cin >> ds.money >> ds.day >> ds.work;
	if (ds.day >= 25) ds.thuong = 0.2;
	else if (22 <= ds.day  && ds.day < 25) ds.thuong = 0.1;
	else ds.thuong = 0 ;
	if (ds.work == "PGD") ds.thuong1 = 200000;
	else if (ds.work == "TP") ds.thuong1 = 180000;
	else if (ds.work == "NV") ds.thuong1 = 150000;
	else ds.thuong1 = 250000;
	ds.money1 = ds.day * ds.money; ds.end = ds.money1 + ds.money1 * ds.thuong   + ds.thuong1; 
	cout << "NV01" << " " << ds.name << " " << ds.money1 << " " <<  ds.money1 * ds.thuong  << " " << ds.thuong1 << " " << ds.end;
}

