#include<bits/stdc++.h>
using namespace std;
struct array1{
	vector<int> mang1;
	int mang[1000];	
};
struct array1 ds[1000];
main () {
	int k;
	cin >> k ;
	while ( k--) {
		int n;
		cin >> n;
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j  < n ; j++) {
				cin >> ds[i].mang[j];
				ds[i].mang1.push_back(ds[i].mang[j]);
			}
		}
		for ( int i = 0 ; i < n ; i++) {
			sort(begin(ds[i].mang1), end(ds[i].mang1));
	    }  
	    for ( int i = 0 ; i < n ; i++) {
			ds[i].mang1.erase(unique(begin(ds[i].mang1), end(ds[i].mang1)), end(ds[i].mang1));
	    }
		vector < int > b;
		for ( int i = 0 ; i < n ; i++) {
			for (auto j : ds[i].mang1) {
				b.push_back(j);
			}
		}
		sort(begin(b),end(b));
		for (auto i : b) cout << i << " ";
		cout << endl;
		int dem1 = 0 , dem2;
		for(int i=0;i<b.size();i++){ 
			int ii=1;
			while(b[i]==b[i+1]){ 
				ii++; 
				i++; 
			} 
			if(ii==n) dem1++; 
		} 
		cout << dem1 << endl;
    }
}
