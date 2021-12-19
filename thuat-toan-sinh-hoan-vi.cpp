#include<iostream>
int x[1000],n;

using namespace std;

void tao(){
	for(int i=1;i<=n;i++){
		x[i]=i;
	}
}

bool kt(){
	for(int i=1;i<=n;i++){
		if(x[i]!=n-i+1) return false;
	}
	return true;
}

void sapXep(int a){
	for(int i=a;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(x[i]>x[j]){
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
}


void sinh(){
	for(int i=n-1;i>=1;i--){
		if(x[i] < x[i+1]){
			for(int j=n;j>i;j--){
				if(x[i]<x[j]){
					int t=x[i];
					x[i]=x[j];
					x[j]=t;
					sapXep(i+1);
					return;
				}
			}
		}
	}
}

void in(){
	for(int i=1;i<=n;i++){
		cout << x[i] << " ";
	}
	cout << endl;
}


main(){
	cin >> n;
	tao();
	in();
	while(!kt()){
		sinh();
		in();
	}
}
