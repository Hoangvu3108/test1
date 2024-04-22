#include<stdio.h>
long long min (long long a,long long b){
	return (a<b)? a:b;
}
long long nCk(long long n, long long k){
	long long res=1;
	k=min(k,n-k);	
	for (int i=0;i<k;i++){
		res*=(n-i);
		res/=(i+1);
	
	}
	return res;
}
int main ()
{
	long long k,n;
	scanf("%llu%llu",&k,&n);
	printf("%llu",nCk(n,k));
}

