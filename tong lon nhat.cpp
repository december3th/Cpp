#include<bits/stdc++.h>
using namespace std;
long long tonglonnhat(int n, int m, int a[], int b[])
{
	    long long max=-1;
	    long long sum=0;
		int n1=0;
		int m1=m;
	    for(int i=0; i<m+1; i++){
	    	for(int j=0; j<n; j++){
	    		if(j>=n1){
	    			sum+=a[j];
				}else{
					sum+=b[j];
				}
			}
			n1++;
			if(sum > max) max=sum;
			sum=0;
			if(n1==n) break;
		}
		return max;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<m; i++) cin>>b[i];
		long long max1 = tonglonnhat(n,m,a,b);
		long long max2 = tonglonnhat(m,n,b,a);
		cout << max1 << " " << max2  << endl;
		if(max1>=max2) cout<<max1;
		else cout<<max2;
		cout<<endl;
	}		
}

