#include<bits/stdc++.h>
using namespace std;
class SV {
	public:
		string code , name , grade, email;
	friend istream &operator >> (istream &in , SV &a) {
		cin >> a.code ;
		scanf("\n");
		getline(cin,a.name);
		cin >> a.grade >> a.email;
		return in;
	}
	friend ostream &operator << (ostream &out , SV &a) {
		cout << a.code << " " << a.name << " " << a.grade << " " << a.email << endl;
		return out;  
	}
};
bool cmp(SV a , SV b) {
	if (a.grade == b.grade ) return a.code < b.code ;
	else return a.grade < b.grade;
}
using namespace std;
main () {
	SV ds[50];
	int n ; cin >> n;
	for (int i = 0 ; i < n ; i++) cin >> ds[i];
	sort(ds,ds+n,cmp);
	for (int i = 0 ; i < n ; i++) cout << ds[i];
}
