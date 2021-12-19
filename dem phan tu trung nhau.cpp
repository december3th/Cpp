#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k ;
	while ( k--) {
		int n;
		cin >> n;
		int x;
		vector < int > b;
		for ( int i = 0 ; i < n ; i++) {
			set<int> s;
			for ( int j = 0 ; j  < n ; j++) {
				cin >> x;
				s.insert(x);
			}
			for (auto c : s) b.push_back(c);
		}

		sort(begin(b), end(b));

		sort(begin(b),end(b));
		int dem1 = 0 , dem2;
		for(int i=0;i<b.size();i++){ 
			int dem2=1;
			while(b[i]==b[i+1]){ 
				dem2++; 
				i++; 
			} 
			if(dem2==n) dem1++; 
		} 
		cout << dem1 << endl;
    }
}
