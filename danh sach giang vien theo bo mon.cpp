#include<bits/stdc++.h>
using namespace std;
struct GV{
	string name,job,correctname,correctjob,name1, id;
};
string bd(string &s) {
	string tmp , s1 ="";
	stringstream ss(s);
	int dem = 0;
	while(getline(ss,tmp,' ')) {
		s1 = tmp;
		dem++;
	}
	s = s1;
	return s;
}
string bd1(string &s2) {
	string tmp , s1 ="";
	stringstream ss(s2);
	int dem = 0;
	while(getline(ss,tmp,' ')) {
		tmp[0] = toupper(tmp[0]);
		s1 += tmp[0];
	}
	s2 = s1;
	return s1;
}
bool cmp(GV A, GV B) {
	if (A.correctname == B.correctname) return A.id < B.id ;
	return A.correctname < B.correctname;
}
void in(GV a) {
	cout << a.id << " " << a.name << " " << a.correctjob << endl;
}
int main () {
	int n ; cin >> n; scanf("\n");
	GV ds[100];
	map<string,int> as;
	for ( int i = 0 ; i < n ; i++) {
		if (i < 9) ds[i].id = "GV0"+to_string(i+1);
		else ds[i].id ="GV"+to_string(i+1);
		scanf("\n");
		getline(cin,ds[i].name);
		getline(cin,ds[i].job);
		ds[i].name1 = ds[i].job;
		ds[i].correctjob = bd1(ds[i].job);
	}
	int m ; cin >> m ; scanf("\n");
	for ( int i = 0 ; i < m ; i++) {
		string s ; getline(cin,s);
		string s1 = s;
		cout << "DANH SACH GIANG VIEN BO MON " << bd1(s) << ":" << endl;
		for ( int j = 0 ; j < n ; j++) {
			if (s1 == ds[j].name1) in(ds[j]);
		}
	}
	
}

