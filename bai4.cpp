#include<iostream>
using namespace std;
int main () {
	int k ;
	cin >> k;
	while ( k--) 
	{
		long long n ;
		cin >> n;
		long long a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		long long max = a[0] ;
		for ( int i = 1; i < n ; i++) if ( max < a[i]) max = a[i];
		cout << max << endl;
	}
}
