#include<stdio.h>
long long gcd(long long a,long long b){
	if (b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
//	printf("%llu",gcd(a,b));
	printf("%llu",__gcd(a,b));
}
