#include<stdio.h>
#include<stdlib.h>
int main(){
	int t;
	t=1;
	while (t--){
		char a[100],b[100];
		scanf("%s%s",a,b);
		for (int i=0;i<sizeof(a);i++) if (a[i]=='6' )a[i]='5';
		for (int i=0;i<sizeof(b);i++) if (b[i]=='6') b[i]='5';
		printf("%lld ",atoll(a)+atoll(b));
		for (int i=0;i<sizeof(a);i++) if (a[i]=='5' )a[i]='6';
		for (int i=0;i<sizeof(b);i++) if (b[i]=='5') b[i]='6';
		
	printf("%lld ",atoll(a)+atoll(b));
	}
}
