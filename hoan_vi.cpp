#include<stdio.h>
#include<string.h>
int x[100],daxet[100];
int n;
void in()
{
	for(int i=1;i<=n;i++)
	{	
	printf("%d ",x[i]);	
	}
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{ 
		if(daxet[j]==0){
			x[i]=j;
			daxet[j]=1;
			if(i==n){
				in();
				printf("\n");
			}	
		else Try(i+1);
		daxet[j]=0;
	}
	}
}
int main(){
	memset(daxet,0,sizeof(daxet));
	scanf("%d",&n);
	Try(1);	
}
