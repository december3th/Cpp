#include<bits/stdc++.h>
using namespace std;
vector <string> cpu;
int n , m , a[100],b[100];
void in() {
	for ( int i = 1 ; i <= m ; i++)  {
		cout << a[b[i]] << " ";
	}
	cout << endl;
}
int check(int a[] ,int &m) {
	if ( m <= 1) return 0;
	int kt = 0 ;
	for ( int i = 1 ; i < m ; i++) {
		if (a[b[i+1]] < a[b[i]]) kt ++;
	}
	if (kt == 0 ) return 1;
	return 0;
}

void sinh(int i ) {
	for ( int j = b[i-1] + 1 ; j <= n ; j++) {
		b[i] = j;
		if ( i == m && check(a,m)) {
			string as;
			for ( int i = 1 ; i <= m; i++) as += to_string(a[b[i]]) +" ";
			as.erase(as.size() -1);
			cpu.push_back(as);
		}
		else sinh(i+1);
	}
}
bool cmp(string a , string b) {
	return a < b;
}
main () {
	cin >> n;
	for ( int i = 1 ; i <= n ; i++) cin >> a[i];
	//sort(a,a+n);
	for ( int i = 2 ; i < n ; i++) {
		m = i;
		sinh(1);
	}
	sort(cpu.begin(),cpu.end(),cmp);
	for ( int i = 0 ; i < cpu.size() ; i++) {
		cout << cpu[i];
		cout << endl;
	}
}
