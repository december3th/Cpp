#include<bits/stdc++.h>
using namespace std;
struct infor {
	int ma ;
	char name[100] ;
	char sex[100] ;
	char day[100];
	char place[100] ;
	char code[100];
	string daywork;
	char day1[100];
};
void nhap(struct infor &a) {
	cin.ignore();
	cin.getline(a.name,sizeof(a.name));
	cin.getline(a.sex,sizeof(a.sex));
	cin.getline(a.day,sizeof(a.day));
	cin.getline(a.place,sizeof(a.place));
	cin.getline(a.code,sizeof(a.code));
	cin >> a.daywork;
}
void sapxep(struct infor *ds,int n) {
	char a[100][100] ;
	char b[100][100];
	int dem  = 0 ;
	for ( int i = 0 ; i < n ; i++  ) {
		ds[i].ma = i ;
		strcpy(a[dem++] , ds[i].day) ;
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
	for ( int i = 0 ; i < n ; i++) {
		strcpy(ds[i].day1,b[i]);
	}
//	for ( int i = 0 ; i < n ; i++) cout << ds[i].day1 << " ";
	for ( int i = 0 ; i < n ; i++) ds[i].ma = i ;
	for ( int i = 0 ; i < n ; i++) {
		for ( int j = 0 ; j < n ; j++) {
			if (strcmp(ds[j - 1].day1, ds[j].day1) > 0) {
				struct infor x = ds[j-1];
				ds[j-1] = ds[j];
				ds[j] = x;
			}
		}
	}
	
}
void inds (struct infor *ds,int n) {
	for ( int i = 0 ; i < n; i++) {
		if (ds[i].ma < 9) cout << "0000" << ds[i].ma + 1 << " ";
		else cout << "000" << ds[i].ma + 1 << " ";
		cout  << ds[i].name << " " << ds[i].sex << " " << ds[i].day << " " << ds[i].place << " " << ds[i].code << " " << ds[i].daywork << endl;
}
}
int main(){
    struct infor ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
