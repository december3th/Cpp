#include<bits/stdc++.h>
using namespace std;
typedef struct ma
{
	int a;
	char b[40];
}Ma;
int check(char *b,char *c)
{
	int d= 0;
	for(int i = 0;i < strlen(c);i++)
	{
		if(b[i]!=c[i])	d++;	
	}
	return d;
}
main()
{
	Ma ma[2];
	ma[0].a=101;
	char t1[40]="A B B A D C C A B D C C A B D";
	strcpy(ma[0].b,t1);
	ma[1].a=102;
	char t2[40]="A C C A B C D D B B C D D B B";
	strcpy(ma[1].b,t2);
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		Ma tmp;
		cin >> tmp.a;
		cin.ignore();
		cin.get(tmp.b,40);
		int kt = 0;
		for(int i = 0;i < 2;i++)
		{
			if(tmp.a==ma[i].a)	{
			cout << setprecision(2)<<fixed<<(float)10-10.00*check(ma[i].b,tmp.b)/15<<endl;
			kt = 1;
			break;
		    }
		    if (kt == 1 ) break;
		}
	}
}
