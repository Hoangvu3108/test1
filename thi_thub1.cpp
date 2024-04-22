#include<stdio.h>
//int main()
//{
//	int a=40,b=4;
//	while (a!=b)
//	if (a>b) a=a-b;
//	else b=b-a;
//	printf("\n%d",a);
//	return 0;
//}
//#include<stdio.h>
//int main(){
//    int x,y,*p,*q;
//    x=5;
//    y=10;
//    p=q=&x;
//    *p=*q=y;
//    printf("x=%d y=%d",x,y);
//}

int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	a[0]=2;
	a[1]=4;
	a[2]=6;
	a[3]=8;
	for (int i=4;i<n;i++){
		a[i]=a[i-4]-a[i-2]+2*a[i-1];
	}
	for (int i=0;i<n;i++){
	
	printf ("%d ",a[i]);
}

	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	printf("\n%d",sum);
}

//bai 17
