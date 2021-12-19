#include<bits/stdc++.h>
using namespace std;
struct mang{
	int chiso1,chiso2,i;
};
bool cmp(mang a , mang b) {
	if (a.chiso2 > b.chiso2 ) return false ;
	if (a.chiso2 == b.chiso2 && a.i > b.i) return false;
	return true;
}
int main () {
	int k;
	cin >> k ;
	while (k--) {
		int n ,x;
		cin >> n >> x;
		mang s[50000];
		for ( int i = 0 ; i < n ; i++) {
			cin >> s[i].chiso1;
			s[i].chiso2 = abs (x-s[i].chiso1);
			s[i].i = i;
		}
		sort (s,s+n,cmp);
		for ( int i = 0 ; i < n ; i++) cout << s[i].chiso1 << " ";
		cout << endl;
	}
}
