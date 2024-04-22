#include<stdio.h>
int sum(int n,int k,int a[])
{
    int count=0;
    int sum=0;
    for (int i=0;i<k;i++)
    {
        sum+=a[i];
    }
      if (sum%2==0)
      {
          count++;
      }
    for (int i=k;i<n;i++)
    {
        sum=a[i]+a[i-k];
        if(sum %2==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",sum(n,k,a));
}
