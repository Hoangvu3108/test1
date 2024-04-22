#include<stdio.h>
void printrepeatchar (char ch, int count){
	for(int i=0;i<count;++i){
		printf("%c",ch);
	}
}
void solve(int n){
	for (int b=n/7;b>=0;b--)
	{
		int remain=n-7*b;
		if(remain % 4==0){
			int a=remain/4;
			printrepeatchar('4',a);
			printrepeatchar('7',b);
			return;
		}
		
	}
	printf("-1");
}

int main()
{
	int t ;
	scanf("%d",&t);
	while (t--){
		long long n ;
		scanf("%d",&n);
	solve(n);
	printf("\n");
	}
}
