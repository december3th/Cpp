#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin >> n;
	scanf("\n");
	string a[n];
	int dem = 0;
	while(n--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		string c[100];			// mang string y nhu mang so nguyen
		int k = 0;
		string as="";
		while(ss>>c[k])  //gan c[k] = gia tri cua ss
		{
			for(int i = 0;i < c[k].size();i++)	c[k][i]=tolower(c[k][i]);
			k++;		// tang k o day
		}
		as+=c[k-1];					// noi xau cuoi cung vao xau ket qua
		for(int i = 0;i < k-1;i++)	as+=c[i][0];			//noi cac chu dau tien vao xau ket qua
		a[dem++]=as;
		if(count(a,a+dem,as)>1)
			cout << as <<count(a,a+dem,as)<<"@ptit.edu.vn"<<endl;
		else	cout << as<<"@ptit.edu.vn"<<endl; 
	}	
}

