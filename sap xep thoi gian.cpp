#include<stdio.h>

typedef struct Time
{
	long long h , m , mn , time;
}T;

int main()
{
	int n;
	scanf("%d",&n);
	T a[n];
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%lld%lld%lld",&a[i].h,&a[i].m,&a[i].mn);
		a[i].time = a[i].h*3600 + a[i].m*60 + a[i].mn;
	}
	for(int i = 0 ; i < n-1 ; i++)
	{
		for(int j = 0 ; j < n-1-i ; j++)
		{
			if(a[j].time > a[j+1].time)
			{
				T tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(int i = 0 ; i < n ; i++)	printf("%lld %lld %lld\n",a[i].h,a[i].m,a[i].mn);
	return 0;
}
