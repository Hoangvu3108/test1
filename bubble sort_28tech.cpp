//bubble sort
#include<stdio.h>
void swap (int *a,int * b){
	int temp=*a;
		*a=*b;
		*b=temp;
}
void sapxep(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		bool ok=false;
		for (int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				ok=true;
			}
		}
		
	}
}
int main()
{	
	int n ;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sapxep(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

