#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2) return 0 ; 
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0 ;
		}
		return 1 ;
	}
}
int main () {
	int l;
	cin >> l ; 
	while ( l--) {
		int n;
		cin >> n;
		int dem = 0 ;
		for ( int i = 1 ; i <= n ; i++)  {
			if ( __gcd(i,n) == 1) dem++;
		}
		if (ngto(dem)) cout << "1";
		else cout << "0";
		cout << endl;
	}
}
