#include<bits/stdc++.h>
using namespace std ;
void tach(char s[]){
	char arr[1000][1000] ; int n = 0 ;
	char *p = strtok(s," ");
	while(p != NULL){
		strcpy(arr[n++] , p) ;
		p = strtok(NULL," ");
	}
	arr[n][1000] = '\0' ;
	for(int i = n - 1 ; i >=0 ; i--){
		cout << arr[i] << " " ;
	} 
}
int main(){
	int t ;
	cin >> t ;
	cin.ignore();
	for(int i =1 ; i <= t ; i++){
		char s[1000] ; 
		cin.getline(s,sizeof(s));
		tach(s);
		cout << endl ;
		cin.clear();
	}
}
