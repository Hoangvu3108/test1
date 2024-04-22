#include<stdio.h>
#include<stdlib.h>
int main(){
	freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//input.txt","r",stdin);
	int x;
	while(1) 
	{
		scanf("%d",&x);
		if(x==42)
			break;
		printf("%d\n",x);
	}
	return 0;
}
