#include<bits/stdc++.h>
using namespace std;
string hieu(string a, string b) {
	string res;int nho = 0;
	while (a.size() < b.size()) a = "0" + a;
	while(a.size() > b.size()) b = "0" + b;
	bool ok=false; 
	if ( a < b) swap(a,b);
	int len = a.size()  - 1 ;
	for ( int i = len - 1 ; i >= 0 ; i--) {
		int so=int (a[i]-'0')-int (b[i]-'0')-nho;
		if (so < 0) {
			res = char(so+ 10 +'0') + res;
			nho = 1;
		}
		else {
			res = char(so + '0' ) + res;
			nho = 0;
		}
	}
	return res;
}
main () {
    int k ;
    cin >> k;
    while (k--) {
    	string a , b;
    	cin >> a >> b;
    	cout << hieu(a,b);
    	cout << endl;
	}
}
