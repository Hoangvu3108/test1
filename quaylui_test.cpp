#include<stdio.h>
int x[100],n;
void in(){
	for (int i=1;i<=n;i++){
		printf("%d",x[i]);
	}
}
void Try(int i){
	for (int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			in();
			printf("\n");
		}
		else Try (i+1);
	}
}
int main (){
	scanf("%d",&n);
	Try(1);
}
