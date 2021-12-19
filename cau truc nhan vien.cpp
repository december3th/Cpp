#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	char ma[100];
	char ten[100];
	char sex[100];
	char day[100];
	char diachi[100];
	char masothue[100];
	char dayhopdong[100];	
};
void nhap(struct NhanVien &a) {
	cin.getline(a.ten,sizeof(a.ten));
	cin.getline(a.sex,sizeof(a.sex));
	cin.getline(a.day,sizeof(a.day));
	cin.getline(a.diachi,sizeof(a.diachi));
	cin.getline(a.masothue,sizeof(a.masothue));
	cin.getline(a.dayhopdong,sizeof(a.dayhopdong));
}
void in(struct NhanVien &a) {
	cout << "00001" << " " <<a.ten <<  " " << a.sex << " " << a.day << " " << a.diachi << " "<< a.masothue << " " << a.dayhopdong ;
	
}
main () {
	struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

