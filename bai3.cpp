#include<bits/stdc++.h>
using namespace std ;
struct data{
	int vl ; 
	int solan ; 
};
bool cmp(data a , data b){
	if(a.solan==b.solan) return a.vl < b.vl ; 
	else return a.solan > b.solan ;
}
int main(){
	int t ; 
	cin >> t ; 
	while(t--){
		int n , m ; 
		cin >> n >> m ; 
		vector<data> a ; 
		int x ;
		for(int i = 0 ; i < n ; i++){
			cin >> x ; 
			int kt = -1 ; 
			for(int j = 0 ; j < a.size() ; j++){
				if(x==a[j].vl){
					kt = j ; 
					break ;
				}
			}
			if(kt==-1){
				struct data c ; 
				c.vl = x ; c.solan = 1 ; 
				a.push_back(c) ;
			} else a[kt].solan++;
		}
		sort(a.begin(),a.end(),cmp) ;
		int k = a.size()-1;
		if(a[0].solan == a[k].solan ) cout << "NONE" << endl ;
		else {
			for(int i = 0 ; i < a.size() ; i++){
				if(a[i].solan != a[0].solan){
					cout << a[i].vl << endl ; 
					break ;
				}
			}
		}
	}
}
