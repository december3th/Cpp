#include<bits/stdc++.h>
using namespace std;
int n,a[10],b[10]={0,0,1,1,1,0,1,1,0,0},s=0;

void in(){
	s ++;
	for (int i=1; i<=5; i++)
        cout << a[i];
    cout << " ";
}

int so(int i){
	for (int j=0; j<=9; j++){
		if (!b[j]){
            a[i]=j;
            b[j]=1;
			if (i==5) in();
            else so(i+1);
            b[j]=0;
        }
    }
} 

int main(){
	cout << "96" << endl;
	for (int j=1; j<=9; j++)
		if (!b[j]){
			a[1]=j;
			b[j]=1;
			so(2);
			b[j]=0;
		}
	cout <<endl << s;
}

