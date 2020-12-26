#include<cstdio>
#include<iostream>
using namespace std;
long long data(long long num, int m)
{
	if(m<=2) return 0;
	num/=2;
	long long yuanzhi=num;
	m--;
	return yuanzhi-data(num,m);
}
int main()
{
	int i,n;
	long long num=1;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			if(i==1) num*=3;
			else num*=2;
		}
		num-=data(num,n);
		printf("%lld\n",num); 
		num=1;
	}
	return 0; 
}
