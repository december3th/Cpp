#include<bits/stdc++.h>
using namespace std;
int n ;
vector<string> a ;
void inti() {
	queue <string> cpu;
	cpu.push("6") ; cpu.push("8") ;
	int dem = 0 ;
	while(dem < n) {
		a.clear();
		vector<string> c;
		string top = cpu.front(); cpu.pop();
		a.push_back(top); c = a ;
		for(auto x : a) cout << x ;
		for (int i = top.size() - 1 ; i >=0 ; i--) cout << top[i];
		cout << " ";
		dem++; 
		cpu.push(top+ "6") ; cpu.push(top +"8");
    }
}
main () {
	int t ; cin >> t; while(t--) {
		cin >> n ;
		inti();
		a.clear();
		cout << endl;
	}
}
