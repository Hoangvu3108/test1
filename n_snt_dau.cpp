#include<stdio.h>
#include<math.h>
int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d",&n);
//	for (int i=0;i<=n;i++){
		/*if*/if (nt(n)){
		
		//printf("%d ",i);
		printf("Yes");
	}
		else printf("No");
		
	 
}
