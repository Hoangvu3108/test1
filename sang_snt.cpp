#include<stdio.h>
#include<math.h>

const int maxn=10000000;
bool nt[maxn+1];
void sang(){
	for (int i=0;i<=maxn;i++){
		nt[i]=true;	
	}
	nt[0]=nt[1]=false;
	for(int i=2;i<sqrt(maxn);i++){
		if(nt[i]){
			for(int j=i*i;j<=maxn;j+=i){
				nt[j]=false;
			}
		}
	}
}
int main(){
	sang();
	for (int i=0;i<=1000;i++){
		if(nt[i])
		printf("%d ",i);
	}
	
}
