#include<stdio.h>
int main(){
	int a[100];
	int n,dem=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;i<n;j++)
		{
			if(a[i]==a[j])
			{
				if(i<=j)
			dem++;
			else 
			break;
			}
		}
		if(dem!=0)
		{
		printf("%d%d",a[i],dem);	
		}
	}
}
