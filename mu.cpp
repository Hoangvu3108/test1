#include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int mu=pow(a,b);
//     printf("%d",mu);
// }
long long dequy(int a,int b){
    if(b==0) return 1;
    return a*dequy(a,b-1);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
   	long long mu=dequy(a, b);
    printf("%llu",mu);
}
