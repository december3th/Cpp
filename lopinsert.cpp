#include<bits/stdc++.h>
using namespace std;
main () {
	ifstream in;
	in.open("DATA.in");
	vector <int> a;
	while (!in.eof()) {
		int x ;
		in >> x;
		a.push_back(x);
	}
	map<int,int> cpu;
	for (int i = 2 ; i < 2 + a[0] ; i++ ) {
		cpu[a[i]]++;
	}
 	for (int i = a[0] + 2 ; i < a.size() ; i++) cpu[a[i]]++;
 	for (auto x : cpu) if (x.second > 1) cout << x.first << " ";
 	in.close();
}
