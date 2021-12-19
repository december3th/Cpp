#include<iostream>
#include<math.h>
using namespace std;
main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		for(long long i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				cout << i << " ";
				n /= i;
			}
		}	
		if(n > 1 )cout << n << endl;
		else cout << endl;
	}
}


