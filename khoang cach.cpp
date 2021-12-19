#include<bits/stdc++.h>
using namespace std ;
struct Point {
	double x , y;
};
void input(struct Point &a) {
	cin >> a.x >> a.y;
}
double distance ( struct Point &a , struct Point &b) {
	double c = a.x - b.x;
	double d = a.y - b.y;
	double e = sqrt (c * c + d * d);
	return e;
}
int main(){
	int k;
	cin >> k;
	while (k--) {
		struct Point a , b;
		input(a);input(b);
		cout << fixed << setprecision(4) << distance(a,b) << endl;
		cout << endl;
	}	
}


