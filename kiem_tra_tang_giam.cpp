#include<stdio.h>
int checkup(int a[],int n)
    { 
    for(int i=0;i<n-1;i++)
    {
        if (a[i]>=a[i+1])
        {
            return 0;
        }
    }
    return 1;
    }
int checkdown(int a[],int n)
    {
    for (int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        return 0;
    }
    return 1;
    }    
int main(){
    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    if (checkup(a,n)||checkdown(a,n))
        printf("YES");
    else printf("NO");
}
