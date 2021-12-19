#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long a[100] ; 
	a[1] = 0 ; a[2] = 1 ; a[3] = 2 ; 
	int k = 4 ; 
	while(k<=92){
		a[k] = a[k-1] + a[k-2] ; 
		k++;
	}
	int t ; 
	cin >> t ; 
	while(t--){
		long long n ;
		cin >> n ; 
	    int kt = 0;
		for ( int i = 1; i <= 92 ; i++) {
			if (n == a[i]) {
				kt = 1;
				break;
			}
			if (kt == 1 ) break;
		}
		if (kt == 1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
