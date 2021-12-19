#include<bits/stdc++.h>
using namespace std ;
struct pp{
	double x , y ; 
};
double tinh( pp A , pp B , pp C){
	return 0.5*abs((B.x - A.x)*(C.y - A.y) - (C.x - A.x) * (B.y - A.y)) ; 
}
int main(){
	int t ; 
	cin >> t ;
	while(t--){
		int n ; 
		cin >> n ; 
		struct pp a[n] ; 
		double sum = 0 ;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].x >> a[i].y ;
		}
		for(int i = 1 ; i < n-1 ; i++){
			sum = sum + tinh(a[0],a[i],a[i+1]);
		}
		cout << fixed << setprecision(3) << sum << endl ; 
	}
}

