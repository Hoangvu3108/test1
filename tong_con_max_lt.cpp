#include<stdio.h>
//long long max(long long a,long long b)
//{
//    return a<b? b:a;
//}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long sum1=0;
	int cnt=0;
    for (int i=0;i<n;i++ )
    {
     sum1+=a[i];
	if(sum1 %2==0) cnt++;
    }
   
    printf("%d",cnt);
}

