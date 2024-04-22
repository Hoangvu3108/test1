#include<stdio.h>
#define N 1000
const int p=1e9+7;
int M[N][N];
int k,n;
int C(int k,int n){
if(k==0||k==n) M[k][n]=1;
else    
    {
    if(M[k][n]==0){
    M[k][n]=C(k-1,n-1)+C(k,n-1);
    M[k][n]=M[k][n] %p;
    }
    }
    return M[k][n];
    void init(){
        for (int i=0;i<=k;i++)
            for (j=0;j<=n;j++)
            M[i][j]=0
    }
}
int main(){
    printf("%d\n",C(k,n));
}
