//phan tich tu/mau thang 1/
#include<stdio.h>
void ql(long long tu,long long mau)
{
	if(mau%tu==0){
		printf("1/%d",mau/tu);
	return ;
	}
	long long x=mau/tu+1;
	printf("%d/%d+",1,x);
	long long maumoi=mau*x;
	long long tumoi=tu*x-mau;
	ql(tumoi,maumoi);
}
int main(){
	long long tu,mau;
	scanf("%lld%lld",&tu,&mau);
	ql(tu,mau)	;
}
