#include<bits/stdc++.h>
using namespace std;
int cpu[1005][10005],res = 0;
main () {
	int t ; cin >> t ; while(t--) {
		string s1 , s2 ; cin >> s1 >> s2;
		memset(cpu,0,sizeof(cpu));
		for (int i = 1 ; i <= s1.size() ; i++) {
			for (int j = 1 ; j <= s2.size() ; j++) {
				if (s1[i-1] == s2[j-1]) cpu[i][j] = cpu[i-1][j-1] + 1;
				else cpu[i][j] = max (cpu[i-1][j],cpu[i][j-1]);
				res = max(res,cpu[i][j]);
			}
		}
		cout << res << "\n";
	}
}
