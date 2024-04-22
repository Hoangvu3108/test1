#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[1000],b[1000];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<m;i++) scanf("%d",&b[i]);
    int i=0,j=0,cnt=0,c[1000];
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[cnt]=a[i];
            cnt=cnt+1;
            i=i+1;
        }
        else 
        {
            c[cnt]=b[j];
            cnt=cnt+1;
            j=j+1;
        }
    }
    while (i<n)
    {
        c[cnt]=a[i];
        cnt=cnt+1;
        i=i+1;
    }
    while (j<m)
    {
        c[cnt]=b[j];
        cnt=cnt+1;
        j=j+1;
    }
    for (int i=0;i<cnt;i++){
    printf("%d ",c[i]);
    }
}
