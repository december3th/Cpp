#include<bits/stdc++.h>
using namespace std ;
const long long r = pow(10,9) + 7; 
int n ;
int main(){
	int t ; 
	cin >> t ; 
	while(t--){
	    cin >> n;
		long long a[1001] ; 
    	a[0] = 1 ; a[1] = 1 ;
	    for (int i =2 ; i <= n ; i++)  a[i] = (a[i-1] % r) + ( a[i-2]  % r);
	     cout << a[n-1] % r << endl;
	}	
}


