#include<bits/stdc++.h>
using namespace std ;

int check(long long n) {
	long long a[10000] ; 
	a[1] = 0 ; a[2] = 1 ; a[3] = 2 ; 
	int k = 4 ; 
	while(k<=10000){
		a[k] = a[k-1] + a[k-2] ; 
		k++;
	}
	for ( int i = 0 ; i <= 10000 ; i ++) {
		if (n == a[i])
		return 1;
	}
	return 0;
}	
int main(){
	int t ; 
	cin >> t ; 
	while(t--){
		long long n ;
		cin >> n ; 
	    long long b[n];
	    for ( long long i = 0 ; i < n ; i++) cin >> b[i];
	    for (long long i = 0 ; i < n ; i++) {
	    	if (check(b[i])) cout << b[i] << " ";
		}
		//cout << endl;
	}
}
