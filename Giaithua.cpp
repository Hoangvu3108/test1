#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long fac=1;
    if (n==0) printf("1");
    else {
        for (int i=1;i<=n;i++)
        fac=fac*i;
    }
    printf("%llu",fac);
}
