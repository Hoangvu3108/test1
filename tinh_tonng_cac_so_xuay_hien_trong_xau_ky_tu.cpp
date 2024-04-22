// tinh tong cac so xuat hien tren xau ky tu 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//tong_so_trong day.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{	
	char c[1000001];
	scanf("%s",c);
	int sum =0;
	for (int i=0;i<strlen(c);i++)
	{
		int cnt =0;
		while(i<strlen(c) && isdigit(c[i]))
		{ cnt =cnt*10+c[i]-'0';
		++i;
		}
		sum+=cnt;
		
	}
	printf("%d\n",sum);
	}
	
}
