#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while (k--)
{
		
	string a ;
	long long  k ;
	cin >> a;
	cin >> k;
	long long  b[1000];
	int dem = 0 ;
	for ( int i = 0 ; i < a.size() ; i++) {
		b[dem++] = a[i] - '0';
	}
	long long  sum = 0 ; 
	for ( int i = 0 ; i < dem ; i++) {
		sum = (sum * 10 + b[i]) % k;
    }
    cout << sum << endl;
}
}
