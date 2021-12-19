#include<bits/stdc++.h>
using namespace std;
main () {
	int k ;
	cin >> k;
	while (k--) {
	   long long n;
	   cin >> n;
	   int dem = 0;
	   long long i = 1;
	   while(i <= sqrt(n))
    	{
        	if(n%i==0) 
			{
            	if ( i % 2 == 0 ) dem++;
            	if (i != (n / i)&& ( n / i ) % 2 == 0 ) dem++;
        	} 
        i++;
    	}
       cout << dem;
	   cout << endl;
	}
}
