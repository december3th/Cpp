#include<bits/stdc++.h> 
using namespace std;
struct tt{
	char ten[100];
	char ns[100] ;
	
};
struct tt ds[100] ;
struct tt ds1[100] ;
main () {
	int n ;
	cin >> n;
	cin.ignore() ;
	for (int i = 0 ; i < n ; i++) {
		cin >> ds[i].ten;
		cin >> ds[i].ns;
	} 
	
	char a[100][100] ;
	char b[100][100];
	int dem  = 0 ;
	for ( int i = 0 ; i < n ; i++  ) {
		strcpy(a[dem++] , ds[i].ns) ;
	} 
	for ( int i = 0 ; i < n ; i++) {
		int dem1= 0;
		int m =strlen(a[i]) ;
		for ( int j = 6; j < m ; j++) {
			b[i][dem1++] = a[i][j]; 
		}
		for ( int j = 2 ; j <=5 ; j++ ) {
			b[i][dem1++] = a[i][j];
		} 
		for ( int j = 0 ; j < 2 ;j++) {
			b[i][dem1++] = a[i][j];
		}
	}
	char t[100];
	char t1[100];
	for ( int i = 0 ; i < n ; i++) {
		strcpy(ds1[i].ten,ds[i].ten );
		strcpy(ds1[i].ns,b[i]);
	}
    for (int i = 1; i < n; i++) {
      for (int j = 1; j < n; j++) {
         if (strcmp(ds1[j - 1].ns, ds1[j].ns) > 0) {
            strcpy(t, ds1[j - 1].ns);
            strcpy(ds1[j - 1].ns,ds1[j].ns);
            strcpy(ds1[j].ns, t);
            strcpy(t, ds1[j - 1].ten);
            strcpy(ds1[j - 1].ten,ds1[j].ten);
            strcpy(ds1[j].ten, t);
          }
       } 
    }
   cout << ds1[n-1].ten << endl << ds1[0].ten;
}

