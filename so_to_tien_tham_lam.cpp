//bai_toan_tham_lam
#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int cnt=0;
 int a[10]={1000,500,200,100,50,20,10,5,2,1}	;
 for (int i=0;i<10;i++)
 {
 	cnt+=n/a[i];
 	n=n%a[i];
 }
 printf("%d\n",cnt);
}
