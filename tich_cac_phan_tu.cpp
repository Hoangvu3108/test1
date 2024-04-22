#include<stdio.h>
const int mod=1000000007;
int main ()
{
	long long res =1;
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			int x; 
			scanf("%d",&x);
			res*=x;
			res%=mod;
		}
	printf("%lld",res);
	}
	
}
