// bai toan con hau
#include<stdio.h>
#include<string.h>
int x[100],cot[100],d1[100],d2[100];
int cnt;
int n;
void ktao()
{
	memset(cot,0,sizeof(cot));
	memset(d1,0,sizeof(d1));
	memset(d2,0,sizeof(d2));
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if (cot[j]==0 && d1[i-j+n]==0 && d2[i+j-1]==0){
			x[i]=j;
			cot[j]=1;
			d1[i-j+n]=1;
			d2[i+j-1]=1;
			if(i==n){
				for(int k=1;k<=n;k++){
					printf("con hau o hang thu %d nam o cot  %d",k,x[k]);
					printf("\n");
				}
				++cnt;
				printf("\n");
			}
			Try(i+1);
			cot[j]=0;
			d1[i-j+n]=0;
			d2[i+j-1]=0;
		}
	}
}
int main(){
	ktao();
	scanf("%d",&n);
	Try(1);
	printf("%d\n",cnt);
}


