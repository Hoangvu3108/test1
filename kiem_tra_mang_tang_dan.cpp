#include <stdio.h>
#include<math.h>
int upcheck(int a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]) 
		return 0;
	}
	return 1;
}
//bool check(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		if(a[i]>a[i+1]){
//			return false;
//		}
//	}
//	return true;
//}
int incheck(int a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i]<=a[i+1])
		return 0;
	}
	return 1;
}
int main(){
	int n;
	int a[1000];
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if (upcheck(a,n)|| incheck(a,n))
		printf("Yes\n");
	else printf("No\n");
}

