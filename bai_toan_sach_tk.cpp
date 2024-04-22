//bai toan sach 
#include<stdio.h>
void swap(int *a,int *b )
{
	int temp=*a;
		*a=*b;
		*b=temp;
}

int ans=0;
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

	for (int i=1;i<=n;i++){
	 printf("%d ",a[i]);
}
}
//	 den day là het bai sap xep 
//	if(i%3==0) {    // o vi tri thu 3 thi khong lam gi het
//		continue;
//	}
//	ans +=a[i];
//	}
//	printf("%d",ans);
//} 
