#include<bits/stdc++.h>
using namespace std;
struct SV {
	string code , name ;
	float toan , ly , hoa;
	float tong;
	string kq;
};
main () {
	SV ds;
	cin >> ds.code;
	scanf("\n");
	getline(cin,ds.name);
	float x;
	cin >> ds.toan >> ds.ly >> ds.hoa;
	if (ds.code.substr(0,3) == "KV1") x = 0.5;
	else if (ds.code.substr(0,3) == "KV2") x = 1.0; 
	if (ds.code.substr(0,3) == "KV3") x = 2.5;
	ds.tong = ds.toan * 2 + ds.ly + ds.hoa;
	if (ds.tong + x >= 24 ) ds.kq = "TRUNG TUYEN";
	else ds.kq =  "TRUOT";
	cout << ds.code << " " << ds.name << " "<<  x << " " << ds.tong << " " << ds.kq;
}

