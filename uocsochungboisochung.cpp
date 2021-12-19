#include<bits/stdc++.h>
using namespace std;
int gcd (int a , int b )
{
	if (b==0 ) return a;
	return gcd (b, a%b);
}
int main () {
	long int a, b, t;
	cin >> t;
	while (t--){
	cin >> a >> b;
	long int lcm = a * b / gcd(a,b);
	cout << lcm << " "<< gcd(a,b);
	cout << endl;
}
	return 0;
}
