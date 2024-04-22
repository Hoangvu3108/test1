#include<stdio.h>
#include<math.h>
int min(long long a,long long b){
	return(a<b)?a:b;
}
int ucln(long long a,long long b){
	if (a==0 || b==0)
	return a+b;
	int k= min(a,b);
	for (int  i= k;i>=1;i--)
	{ 
	if (a%i==0 && b%i==0)
	return i;
	 } 
}
int main(){
	long long a,b;	
	scanf("%llu%llu",&a,&b);
//	int n=ucln(a,b);
	printf("%d",ucln(a,b));

}	
