#include<stdio.h>
int main()
{
    int n,k;
    int sum=0,count=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<k;i++)
    {
        sum+=a[i];
    }
        if(sum % 2 == 0) 
		{
		count ++;
	}
    
    for (int i=1;i<n-k+1;i++)
    {
        sum=sum-a[i-1]+a[i+k-1];
	
        if (sum %2 ==0) 
		{
		count ++;
	}
}
    printf("%d",count);
}
