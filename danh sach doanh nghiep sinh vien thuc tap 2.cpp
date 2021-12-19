#include<bits/stdc++.h>
using namespace std;
struct DN{
	string code , name ;
	int quantity;
};
bool cmp ( DN a, DN b) {
	if (a.quantity == b.quantity) return a.code < b.code ;
	return a.quantity > b.quantity;
}
void nhap(DN *a , int n) {
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i].code;
		scanf("\n");
		getline(cin,a[i].name);
		cin >> a[i].quantity;
	}
}
void sapxep(DN *a , int n) {
	stable_sort(a,a+n,cmp);
}
void in(DN &a ) {
	 cout << a.code << " " << a.name << " " << a.quantity << endl;
}
void kt(int c , int b , DN &a ) {
	if (c <= a.quantity &&  a.quantity <= b) in(a);
}
int main () {
	int n ; cin >> n; scanf("\n");
	DN ds[100];
	nhap(ds,n);
	sapxep(ds,n);
	int m ; cin >> m ; scanf("\n");
	for ( int i = 0 ; i < m ; i++) {
		int b , c ; cin >> c >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << c << " DEN "<< b << " SINH VIEN:" << endl;
		for ( int i = 0 ; i < n ; i++) {
			kt(c,b,ds[i]);
		}
	}
}
