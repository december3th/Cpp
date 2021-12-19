#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
const int MOD = (int) 1e9+7;
const int MAX_INT = (int) 1e7;
int n;
int x,y,z,tmp1,tmp2;

int main(){
	tester()
	{
		cin >> n>> x >> y >> z;
		pair<int,int>steps[3]={{1,x},{-1,y},{0,z}};
		queue<pair<int,int>>q;
		map<int,int>ma;
		q.push({0,0});
		ma[0]= 0;;
		int as=MAX_INT;
		while(!q.empty())
		{
			pair<int,int>top = q.front();q.pop();
			steps[2].first = top.first;
			if(top.first<n)
			{
				FOR(i,0,3)
				{
					tmp1 = top.first+steps[i].first; tmp2= top.second+steps[i].second;
					if(tmp2< as)
					{
						if(tmp1!=n)
						{
							if((ma.find(tmp1)!=ma.end()&&tmp2<ma[tmp1])||ma.find(tmp1)==ma.end())	
							{
								q.push({tmp1,tmp2});
								ma[tmp1]=tmp2;
							}
						}
						else	as =tmp2;
					}
				}
			}
			else 
			{
				tmp1 = top.first+steps[1].first; tmp2= top.second+steps[1].second;
				if(tmp2< as)
				{
					if(tmp1!=n)
					{
						if((ma.find(tmp1)!=ma.end()&&tmp2<ma[tmp1])||ma.find(tmp1)==ma.end())	
						{
							q.push({tmp1,tmp2});
							ma[tmp1]=tmp2;
						}
					}
					else	as =tmp2;
				}
			}
		}
		cout << as << endl;
	}
}
//10
//+1  -1  *2
// 2   5   4
//0 0 
//1 2  
//2 4
//3 6	1 9 4 8
//6 10 5 10 8 12
//7 12 12 14 10 14
