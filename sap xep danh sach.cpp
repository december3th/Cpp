#include<bits/stdc++.h>
using namespace std;
struct GV{
	string name,job,correctname,correctjob,name1;
	int id;
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
int main () {
	int n ; cin >> n; scanf("\n");
	GV ds[100];
	map<string,int> as;
	for ( int i = 0 ; i < n ; i++) {
		ds[i].id = i + 1;
		scanf("\n");
		getline(cin,ds[i].name);
		getline(cin,ds[i].job);
		ds[i].name1 = ds[i].name;
		ds[i].correctname = bd(ds[i].name);
		ds[i].correctjob = bd1(ds[i].job);
		as[ds[i].correctname] = ds[i].id;
	}
	stable_sort(ds,ds+n,cmp);
	for (int i = 0 ; i < n ; i++ ) {
		if (ds[i].id <= 9) cout << "GV0" << ds[i].id ;
		else cout << "GV" << ds[i].id ;
		cout << " " << ds[i].name1 << " " << ds[i].correctjob << endl;
	}
	
}

