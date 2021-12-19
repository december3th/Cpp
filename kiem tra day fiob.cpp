#include<bits/stdc++.h>
using namespace std ;

int check(int n){
	if(n == 0 || n == 1) return 1 ;
	else {
		int f0 = 1 , f1 = 1 , fn = 2 ;
		while(fn < n){
			fn = f0 + f1 ;
			f0 = f1 ;
			f1 = fn ;
		}
		if(fn == n) return 1 ;
		else return 0 ;
	}
}
int main(){
	int t ; 
	cin >> t ; 
	while(t--){
		int n ;
		cin >> n ; 
	    int b[n];
	    for ( int i = 0 ; i < n ; i++) cin >> b[i];
	    for (int i = 0 ; i < n ; i++) {
	    	if (check(b[i])) cout << b[i] << " ";
		}
		cout << endl;
	}
}
