#include<bits/stdc++.h> 
using namespace std;
struct SinhVien {
	string name;
	string clas;
	string birthday;
	float gpa;
};
void nhap(struct SinhVien a[] ,int &n) {
	for (int i = 0 ; i < n ; i++ ) {
		cin.ignore();
		getline(cin,a[i].name);
		getline(cin,a[i].clas);
		getline(cin,a[i].birthday);
		cin >> a[i].gpa;
		if(a[i].birthday[1]=='/')	a[i].birthday.insert(a[i].birthday.begin()+0,'0');
	    if(a[i].birthday[4]=='/')	a[i].birthday.insert(a[i].birthday.begin()+3,'0');
	}
}
void in(struct SinhVien a[],int &n) {
	for ( int i = 0 ; i < n ; i++) {
		cout << "B20DCCN" ;
		if (i < 9) cout << "00" << i + 1 << " ";
		else cout << "0" << i + 1  << " ";
		cout << a[i].name << " " << a[i].clas << " " << a[i].birthday << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
