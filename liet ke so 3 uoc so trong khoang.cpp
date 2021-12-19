#include <bits/stdc++.h>
using namespace std; 
bool a[1000001];
void sang() {
	a[0]=false;
	a[1]=false;
	for(int i = 2;i<1000001;i++) a[i]=true;
	for(int i = 2;i <1000001;i++) {
		if(a[i]==true) {
			for(int j = i+ i ;j <1000001;j+=i) a[j]=false;	
		}
	}
 } 
main() 
{ 
	long long  k ;
	sang();
	cin >> k;
	while(k--) 
	{
		long long c,b;
		cin >> c >> b;
		long long x = sqrt(c);
		if(x * x < c)	x+=1;
		int dem = 0; 
		for(int i = x ; i <= sqrt(b); i++) {
	    	if(a[i] == true) dem++; 
	    }	 
		cout <<dem <<endl; 
	} 
}

