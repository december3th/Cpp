#include<bits/stdc++.h>
using namespace std;
int n , a[100][100],x[100],fopt = 9999999,xopt[100];
vector <vector<int>> cpu;
void nhap() {
	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= n ; j++ ) {
			cin >> a[i][j];
		}
	}
}
void check() {
	int sum = 0;
	for (int i = 1 ; i <= n ; i++) {
		sum += a[i][x[i]];
	}
	if (fopt > sum) {
		cpu.clear();
		fopt = sum;
		vector <int> s;
		for (int i = 1 ; i <= n ; i++) s.push_back(x[i]);
		cpu.push_back(s);
	}
	else if (fopt == sum) {
		vector<int> s;
		for (int i = 1 ; i <= n ; i++) s.push_back(x[i]);
		cpu.push_back(s);
	}
}
void inti() {
	for (int i = 1 ; i <= n ; i++) {
		x[i] = i  ;
	}
	check();
	while(next_permutation(x+1,x+n+1)) {
		check();
	}
} 
main () {
	nhap();
	inti();
	for (int i = 0 ; i < cpu.size() ; i++) {
		for (int j = 0 ; j < cpu[i].size() ; j++) {
			cout<<"Man"<<j + 1 <<"->Job"<<cpu[i][j]<<" || ";
		}
		cout << endl;
	}
}
