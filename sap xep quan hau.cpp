#include<bits/stdc++.h>
using namespace std;
int  a[100],c[100][100], n = 8 , maxx;bool used[100] ,xuoi[100],nguoc[100] ;
void in() {
	int t = 0;
    for ( int i = 1 ; i <= n ; i++) t = t + c[i][a[i]];
    if (t > maxx) maxx = t;
}
void sinh(int i ) {
    for ( int j = 1 ;  j <= n ; j++) {
        if (!used[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
            a[i]=j;
            used[j]=true;xuoi[i-j+n]=true;nguoc[i+j-1]=true;
            if (i == n ) in();
            else sinh(i+1);
            used[j] = false ; xuoi[i-j+n] = false ; nguoc[i+j-1] = false ;
        }
    }
}
main () {
    int t , i , j ; cin >>  t;
    while(t--) {
    	maxx = 0;
    	for (int i = 1 ; i <= 10 ; i++) used[i] = false ;
    	for (int i = 1 ; i <= 20 ; i++) {
    		xuoi[i] = false ,nguoc[i] = false;
		}
		for (int i = 1 ; i <= n ; i++) for (int j = 1 ; j <= n ; j++) cin >> c[i][j];
		sinh(1);
		cout << maxx;
		cout << endl;
	}
}
