#include<stdio.h>
#include<math.h>
const int maxn=1000000;
bool nt[maxn];
void sang()
{
    for (int i=0;i<=maxn;i++ )
    {
        nt[i]=true;}
        nt[0]=nt[1]=false;
        for (int i=2;i<=sqrt(maxn);i++)
        if( nt[i])
        {
            for (int j=i*i;j<=maxn;j+=i){
                nt[j]=false;
            }
        }
}

int main(){
    int n;
    scanf("%d",&n);
    sang();
    for (int i=1;i<=n;i++){
        if (nt[i])
        printf("%d ",i);
    }
}
