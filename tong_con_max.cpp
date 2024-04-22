#include<stdio.h>
long long max( long long a,long long b){
	return a<b? b:a;
}
int cnt[1000000]={0};
int main(){
	freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//input2.txt","r",stdin);
 	int n;
 	scanf("%d",&n);
 	int a[n];
 	for (int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 long long sum1=0,sum2= -1e18;
	 for (int i=0;i<n;i++){
	 	sum1+=a[i];
	 	sum2=max (sum1,sum2);
	 	if (sum1<1) sum1=0; 
	 }
	 printf("%lld",sum2);
}
