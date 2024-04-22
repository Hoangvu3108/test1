#include<stdio.h>
long long c[1001][1001];
void init(){
    for (int i=0;i<=1000;i++)
    {
        for (int j=0;j<=i;j++)
        {
            if (j==0 || j==i){
            c[j][i]=1;
            }
            else {
                c[j][i]=c[j-1][i-1]+c[j][i-1];
             c[j][i]%=1000000007;
                
            }
        }
    }
}
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    init();
    printf("%lld",c[k][n]);
}
//accept tren huststack
