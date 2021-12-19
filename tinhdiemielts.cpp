#include<bits/stdc++.h>
using namespace std;
struct point {
	long long read, listen;
	double speak,write, read1 , listen1;
};
double correct(long long read) {
	double read1;
	if (3 <= read && read <= 4 ) read1 = 2.5;
	else if (5 <= read && read <= 6 ) read1 = 3.0;
	else if (7 <= read && read  <= 9 ) read1 = 3.5;
	else if (10 <= read && read  <= 12 ) read1 = 4.0;
	else if (13 <= read && read  <= 15 ) read1 = 4.5;
	else if (16 <= read && read  <= 19 ) read1 = 5.0;
	else if (20  <= read && read  <= 22 ) read1 = 5.5;
	else if (23 <= read && read  <= 26 ) read1 = 6.0;
	else if (27 <= read && read  <= 29 ) read1 = 6.5;
	else if (30 <= read && read  <= 32 ) read1 = 7.0;
	else if (33 <= read && read  <= 34 ) read1 = 7.5;
	else if (35 <= read && read  <= 36 ) read1 = 8.0;
	else if (37 <= read && read  <= 38 ) read1 = 8.5;
	else if (39 <= read && read  <= 40 ) read1 = 9.0;
	return read1;
}
main () {
	int t ; cin >> t ; while(t--) {
		point ds;
		cin >> ds.read >> ds.listen >> ds.speak >> ds.write;
		ds.read1 = correct(ds.read);
		ds.listen1 = correct(ds.listen);
		double tong = (ds.read1 + ds.listen1 + ds.speak + ds.write) / 4;
		string tong1 = to_string(tong);
		if (tong1[2] >= '3' && tong1[2] < '7' || tong1[2] == '2'&& tong1[3] >= '5') {
			cout << tong1[0] << ".5";
		}
		else if (tong1[2] > '7' || tong1[2] == '7' && tong1[3] >= 7 ) {
			tong1[0]++;
			cout << tong1[0] << ".0";
		}
		else cout << tong1[0] << ".0";
		cout << endl;
	}
}

