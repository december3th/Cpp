#include<bits/stdc++.h>
using namespace std;
int used[100] = {0}, used1[100] = {0}, A[100],B[100],n;
void inso() {
	for ( int i = 1 ; i <= n ; i++) cout << B[i];
}
void inchu() {
	for ( int i = 1 ; i <= n ; i++) cout << static_cast<char>(A[i]+64);
}
void try1(int k ) {
	for ( int i = 1 ; i <= n ; i++) {
		if (!used1[i]) {
			B[k] = i;
			used1[i] = 0;
			if ( k == n) {
				inchu();inso();cout << endl;
			}
		    else {
			    try1(k+1);
	        }
		    used1[i] = 0;
	    }
	}
}
void try2(int k) {
	for ( int i = 1 ; i <= n ; i++) {
		if (!used[i]) {
			A[k] = i;
			used[i] = 1;
			if (k == n) try1(1);
			else {
				try2(k+1);
		    }
			used[i] = 0;
		}
	}
}
main () {
	cin >> n;
	try2(1);
}
