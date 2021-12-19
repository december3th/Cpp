#include<bits/stdc++.h>
using namespace std;
long long cpu[55];
void make() {
	cpu[1] = 1 ; cpu[2] = 2 ; cpu[3] = 4;
	for (int i = 4 ; i <= 50 ; i++) {
		cpu[i] = cpu[i-1] + cpu[i-2] + cpu[i-3];
	}
}
main () {
	make();
	int t ; cin >> t ; while(t--) {
		long long n ; cin >> n;
		cout << cpu[n] << endl;
	}
}

