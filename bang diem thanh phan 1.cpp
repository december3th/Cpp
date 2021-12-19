#include<bits/stdc++.h>
using namespace std;
struct infor{
	char code[100];
	char name[100];
	char clas[100];
	float a,b,c;
	float sum ;
	int ma ;
	char hanh1[100];
};
struct infor ds[100];
;
main () {
	int n;
	cin >> n ;
	char hanh[100];
	for ( int i = 0 ; i < n ; i++) {
		cin.ignore() ;
		int dem = 0;
		cin.getline(ds[i].code,sizeof(ds[i].code));
		cin.getline(ds[i].name,sizeof(ds[i].name));
		cin.getline(ds[i].clas,sizeof(ds[i].clas));
		cin >>  ds[i].a >> ds[i].b >> ds[i].c;
		for (int j = strlen(ds[i].code) - 3 ; j <= strlen(ds[i].code) - 1  ;j++) hanh[dem++] = ds[i].code[j];
		strcpy(ds[i].hanh1,hanh);
	}
	for ( int i = 1 ; i < n; i++) {
		for ( int j = 1; j < n ; j++) {
			if (strcmp(ds[j-1].code,ds[j].code) >  0) {
				struct  infor x = ds[j-1];
				ds[j-1] = ds[j];
				ds[j] = x;
			}
		}
	}
	for ( int i = 0 ; i < n ; i++) cout << i + 1 << " " << ds[i].code << " " << ds[i].name << " " << ds[i].clas << " " << fixed << setprecision(1) << ds[i].a << " " << fixed << setprecision(1) << ds[i].b << " " << fixed << setprecision(1)<< ds[i].c << endl;
}
