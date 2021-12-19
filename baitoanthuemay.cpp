#include <bits/stdc++.h>
using namespace std;
int  n , m , a[50][50] , x[100] ,fopt = 0; vector <vector<int>> cpu;
void nhap() {
   cin >> n >> m ;
   for (int i = 1 ; i <= n ; i++) for (int j = 1 ; j <= m ; j++) cin >> a[i][j];
}
void xuly() {
	int value[100] = {0},sum = 0;
	for (int i = 1 ; i <= n ; i++) {
		if (x[i]) {
			for (int j = 1 ; j <= m ; j++) {
				value[j] += a[i][j];
			}
		}
	}
	bool kt = 1;
	for (int i = 1  ; i <= m ; i++) {
		if (value[i] > 1) {
			kt = 0 ;
			break;
		}
		sum += value[i];
	}
	if (kt) {
		if (fopt < sum) {
			cpu.clear();
			fopt = sum;
			vector <int> as;
			for (int i = 1 ; i <= n ; i++) as.push_back(x[i]);
			cpu.push_back(as);
		} 
		else if (fopt == sum) {
			vector <int> as;
			for (int i = 1 ; i <= n ; i++) as.push_back(x[i]);
			cpu.push_back(as);
		}
	}
	
}
void inti(int i) {
	for (int j = 0 ; j <= 1 ; j++) {
		x[i] = j;
		if (i == n) {
			xuly();
		}
		else inti(i+1);
	}
}
using namespace std;
main () {
	nhap();
	inti(1);
	for (int i = 0 ; i < cpu.size() ; i++) {
		for (int j = 0 ; j < cpu[i].size() ; j++) {
			cout << cpu[i][j] << " ";
		}
		cout << endl;
	}
}
