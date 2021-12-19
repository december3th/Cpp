#include<iostream>
#include<string.h>
using namespace std;
main () {
	int k ;
	cin >> k ;
	while (k--) {
		char a[100];
		cin>>a;
		int b= strlen(a);
		if (a[b-1] - 48 == 6 && a[b-2] - 48 == 8) cout <<"1"<<endl;
		else cout <<"0"<<endl;
		
	}
}
