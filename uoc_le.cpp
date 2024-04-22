#include<stdio.h>
bool check(int n){
	
	while (n%2==0) n=n/2;
	if(n==1) return false;
	return true;
	
}
int main(){
	long long n;
	scanf("%d",&n);
	if (check(n))
	printf("Yes");
	else printf("No");
}
