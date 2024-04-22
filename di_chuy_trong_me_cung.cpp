#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int a[100][100];
int n;
char *add1="D";
char *add2="R";
char s[] ="";
void pop_back(char *s) {
    if (s != NULL && s[0] != '\0') {
        s[strlen(s) - 1] = '\0';
    }
}

void Try( int i,int j){
	if(i+1<=n && a[i+1][j]==1){
	strcat(s,add1);
	//s[]+="D";
	a[i+1][j]=0;
	Try(i+1,j);
 	pop_back(s);
	a[i+1][j]=1;
	}
	if(j+1<=n && a[i][j+1]==1){
	strcat(s,add1);	
	//	s+="R";
		a[i][j+1]=0;
		Try(i,j+1);
	 pop_back(s);
		a[i][j+1]=1;
	}

}
int main(){
	freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//input1.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		Try(1,1);
		printf("\n");
	}
}
