#include<bits/stdc++.h>
using namespace std;
string correct(string s) {
	string s1 = s;
	for (int i = 0 ; i < s1.size() ; i++ ) s1[i] = tolower(s1[i]);
	return s1;
}
main () {
	string s,s1;
	getline(cin,s); getline(cin,s1);
	stringstream ss(s) , ss1(s1);
	string tmp,tmp1;
	map<string,int> cpu;
	while(getline(ss,tmp,' ' )) {
		tmp = correct(tmp);
		cpu[tmp]++;
	}
	while(getline(ss1,tmp1,' ')) {
		tmp1 = correct(tmp1);
		cpu[tmp1]++;
	}
	for (auto x : cpu) {
		if (x.second >= 1) cout << x.first << " ";
	}
	cout << endl;
	for (auto x : cpu) {
		if (x.second > 1) cout << x.first << " ";
	}
	//Lap trinh huong doi tuong
    //Ngon ngu lap trinh C++
}
