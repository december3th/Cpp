#include<bits/stdc++.h> 
using namespace std;
struct ThiSinh {
	char name[100];
	char day[100];
	float d , b, c;
	float tong ;
};
void nhap(struct ThiSinh &a) {
	cin.getline ( a.name , sizeof(a.name));
	cin.getline(a.day,sizeof(a.day));
	cin >> a.d;
	cin >> a.b;
	cin >> a.c;
	a.tong = a.d + a.c + a.b;
}
void in(struct ThiSinh &a) {
	cout << a.name << " " << a.day << " " << fixed << setprecision(1) << a.tong;
}
main () {
	struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
	
}
