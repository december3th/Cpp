#include<iostream>
using namespace std;
int main () {
	int k ;
	cin >> k;
	while ( k--) 
	{
		long long n ,c;
		cin >> n >> c;
		long long a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				if ( a[i] > a[j]) {
					int swap = a[i];
					a[i] = a[j];
					a[j] = swap;
				}
			}
		}
		cout << a[c] << endl;
	}
}
