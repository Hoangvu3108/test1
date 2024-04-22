
#include<stdio.h>
int main()
{
int a;
scanf("%d",a);
int b = (((a++)<0) ? -(a++) : (a++));
printf("%d",b);
}
