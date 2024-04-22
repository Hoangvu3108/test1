#include<stdio.h>
void swap(int *a,int *b )
{
	int temp=*a;
		*a=*b;
		*b=temp;
}
int res=0;
int main()
{
	int n;
	scanf("%d",&n);
	int a[1000];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)	
		{
			if(a[i]<a[j]) swap(&a[i],&a[j]);
		}	
	}
//	for (int i=1;i<=n;i++){
//		printf("%d ",a[i]);
//	}
	int b[1000];
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	for (int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)	
		{
			if(b[i]>b[j]) swap(&b[i],&b[j]);
		}	
	}
	for(int i=1;i<=n;i++){
		res+=a[i]*b[i];
	}
//	for (int i=0;i<n;i++){
//		printf("%d",b[i]);
//	}
	printf("%d ",res);
}
