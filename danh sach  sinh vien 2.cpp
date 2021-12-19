#include<bits/stdc++.h> 
using namespace std;
struct SinhVien {
	int ma;
	char name[100];
	char clas[100];
	string birthday;
	float gpa;
	char name1[100];
};
void nhap(struct SinhVien *a,int &n) {
	for (int i = 0 ; i < n ; i++ ) {
		cin.ignore();
		a[i].ma = i ;
		cin.getline(a[i].name,sizeof(a[i].name));
		cin.getline(a[i].clas,sizeof(a[i].clas));
		getline(cin,a[i].birthday);
		cin >> a[i].gpa;
		if(a[i].birthday[1]=='/')	a[i].birthday.insert(a[i].birthday.begin()+0,'0');
	    if(a[i].birthday[4]=='/')	a[i].birthday.insert(a[i].birthday.begin()+3,'0');
	}
}
void sapxep(struct SinhVien *a,int &n) {
	for ( int i = 1 ; i < n ; i++) {
		for ( int j = 1 ; j < n ; j++ ) {
			if (a[j-1].gpa <  a[j].gpa) {
				struct SinhVien x = a[j-1];
				a[j-1] = a[j];
				a[j] = x;
			}
		}
	}
}
void in(struct SinhVien *a,int &n) {
	for ( int i = 0 ; i < n ; i++) {
		cout << "B20DCCN" ;
		if ( a[i].ma <  9) cout << "00" <<  a[i].ma + 1  << " "; 
		else cout << "0" << a[i].ma + 1 << " ";
		for ( int j = 0 ; j < strlen(a[i].name) ; j++) a[i].name[j] = tolower(a[i].name[j]);
		char *p = strtok(a[i].name," ");
		char s[100][100] ; int dem = 0 ;
		while ( p != NULL) {
			strcpy(s[dem++],p);
			p = strtok( NULL , " ");
	    }
	    for ( int j = 0 ; j < dem ; j++) {
	    	for ( int l = 0 ; l < strlen(s[j]) ; l++) {
	    		if ( l == 0 ) s[j][l] = toupper(s[j][l]);
			}
		}
		for (int j = 0 ;  j < dem ; j++) cout << s[j] << " ";	
		cout  << a[i].clas << " " << a[i].birthday << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
