#include<stdio.h>
//void dep(int n ){
//	
//}
int main(){
	int n,so_nghich=0,m,temp;
	scanf("%d",&n);
	temp=n;
	while (temp!=0)
	{
		m=temp%10;
		so_nghich=so_nghich*10+m;
		temp/=10;
		if (temp %2==1)
		continue;
		printf("khong phai so dep");
	}
//	if(so_nghich=n) printf("Day la so nghich %d",n);
//	else printf("Day khong phai la so nghivh %d",n);
}
