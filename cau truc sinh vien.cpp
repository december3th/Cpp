#include<bits/stdc++.h> 
using namespace std;
struct SinhVien {
    char masv[100] ="B20DCCN001";
	char name[100];
	char lop[100];
	char day[100];
	float gpa;
};
void nhap(struct SinhVien &a) {
	cin.getline ( a.name , sizeof(a.name));
	cin.getline ( a.lop , sizeof(a.lop));
	cin.getline(a.day,sizeof(a.day));
	cin >> a.gpa;
}
void in(struct SinhVien &a ) {
    if (strlen(a.day) == 10) {
    	cout << a.masv << " "<< a.name << " " << a.lop << " " << a.day << " " << fixed << setprecision(2) << a.gpa;
	}
	else{
	char s[100];
	char s1[100];
	int dem = 0 ,dem1 = 0;
	for (int i = 0 ; i < strlen(a.day);i++) {
		if (a.day[i] == '/' &&  '0' <= a.day[i-1] && a.day[i -1 ] <= '9' && a.day[i-2] == '\0'|| a.day[i] == '/' &&  '0' <= a.day[i-1] && a.day[i -1 ] <= '9' &&  a.day[i -2 ] == '/') {
			    s[dem++] ='0';
			    s[dem++] = a.day[i-1];
			    s[dem++] = '/';
		}
		else s[dem++] = a.day[i];	
   }
   
   for (int i = 0 ; i < dem ; i++) {
   	 if (s[i] == s[i+2] && s[i+1] =='0') s[i] = '\0';
   }
   
   for ( int i = 0 ; i < dem  ; i++) {
   	 if (s[i] != '\0') s1[dem1++] = s[i];
   }
   cout << a.masv << " "<< a.name << " " << a.lop << " " ;
   for ( int i = 0 ; i < dem1   ; i++) cout << s1[i];
   cout << " " <<  fixed << setprecision(2) << a.gpa;
 }
}
main () {
	struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
// 03/12/2002   
//3/12/2002 3/4/2002
