#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while(k--) {
		long int n,m;
		cin >> n >> m;
		long int a[n+5],b[m+5];
		vector<long int > v1;
		vector<long int > v2;
		vector<long int > dest1;
		vector<long int > dest2;
		for ( int i = 0 ; i < n ;i++) {
			cin >> a[i];
			v1.push_back(a[i]);
		}
		for ( int i = 0 ; i < m ; i++) {
			cin >> b[i];
			v2.push_back(b[i]);
		}
		std::set_union(v1.begin(), v1.end(),
                       v2.begin(), v2.end(),                  
                       std::back_inserter(dest1));
        std::set_intersection(v1.begin(), v1.end(),
                        v2.begin(), v2.end(),
                        std::back_inserter(dest2));               
        sort(dest1.begin(),dest1.end());  
		sort(dest2.begin(),dest2.end()); 
        for (auto x : dest1) cout << x << " ";
		cout << endl;       
		for ( auto x1 : dest2)  cout << x1 << " ";       
		cout << endl;
	}
}
