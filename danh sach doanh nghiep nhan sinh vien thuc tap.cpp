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
void in(DN *a ,int n) {
	for (int i = 0 ; i < n ; i++) cout << a[i].code << " " << a[i].name << " " << a[i].quantity << endl;
}
int main () {
	int n ; cin >> n; scanf("\n");
	DN ds[100];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
}

