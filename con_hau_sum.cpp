// bai toan con hau
#include<stdio.h>
#include<string.h>
int x[100],cot[100],d1[100],d2[100];
int cnt;
int n=8;
int res=0;
int a[100][100];
long long max(long long a,long long b){
	return (a<b)?a:b;
}
void ktao()
{	
for(int i=1;i<=n;i++){
		for(int j;j<=n;j++)
		scanf("%d",&a[i][j]);
} 
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
//				for(int k=1;k<=n;k++){
//					printf("con hau o hang thu %d nam o cot  %d",k,x[k]);
//		
			int sum=0;
			for(int k=1;k<=n;k++){
				sum+=a[k][x[k]];
			}

//			printf("%d",sum);
//				printf("\n");
				res=max(res,sum);
				}
	
			
			Try(i+1);
			cot[j]=0;
			d1[i-j+n]=0;
			d2[i+j-1]=0;
		}
		}
	}

int main(){
	freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//input_con_hau","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
	
	ktao();
	//scanf("%d",&n);
	res=0;
	Try(1);
	printf("%d\n",res);
}
}

