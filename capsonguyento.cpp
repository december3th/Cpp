#include<bits/stdc++.h>
using namespace std;

int ngto(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t, n; cin >> t;
	while(t--)
	{
		cin >> n;
		bool kt = true;
		for(int i = 2; i <= n / 2; i++)
		{
			if(ngto(i) == 1 && ngto(n - i) == 1)
			{
				kt = false;
				cout << i << " " << n - i << endl;
				break;
			}
		}
	}
	return 0;
}

