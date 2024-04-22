#include<stdio.h>
int x[100];
    int n;
void in(){
    for (int i=1;i<=n;i++)
    {
        printf("%c",/*(char)*/x[i]);
    }
}
void Try(int i )
{
    for(int j='A';j<='B';j++){
        x[i]=j;
        if (i==n){
        in();
        printf("\n");
        }
        else Try(i+1);
    }
}
int main()
{
    // int x[100];
    // int n;
    scanf("%d",&n);
    Try(1);
}
