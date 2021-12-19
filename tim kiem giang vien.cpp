#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string code , name , room ,day;
	double gpa ;
};
void correctday(string &s) {
	if (s[1] == '/' ) s = "0" + s;
	if (s[4] == '/') s.insert(3,"0");
}
void nhapThongTinSV (SinhVien &a) {
	getline(cin,a.name);
	cin >> a.room >> a.day >> a.gpa ;
	correctday(a.day);
}

void inThongTinSV (SinhVien &a) {
	cout << "N20DCCN001" << "\t" << a.name << "\t" << a.room << "\t" << a.day << "\t" ;
	printf("%0.2lf",a.gpa);
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
