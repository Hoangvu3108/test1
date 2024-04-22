//#include<stdio.h>
//long long min( long long a,long long b){
//	return a<b? a:b;
//}
//int cnt[1000000]={0};
//int main(){
//	freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//input2.txt","r",stdin);
// 	int n;
// 	scanf("%d",&n);
// 	int a[n];
// 	for (int i=0;i<n;i++){
// 		scanf("%d",&a[i]);
//	 }
//	 long long sum1=0,sum2= +1e18;
//	 for (int i=0;i<n;i++){
//	 	if(i>0){
//	 		sum1+=a[i];
//	 		sum2=min(sum1,sum2);
//		 }
//		 else{
//	 	sum1+=a[i];
//	 	sum2=min (sum1,sum2);
//	 	if (sum1>0) sum1=0; 
//	 }
//	}
//	 printf("%lld",sum2);
//}
#include<stdio.h>
#include<limits.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    freopen("C://Users//Asus//Downloads//2023.2//Cau truc du lieu va giai thuat//file_input//input2.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long sum1 = 0, sum2 = LLONG_MAX; // Kh?i t?o sum2 là giá tr? l?n nh?t c?a ki?u long long

    for (int i = 0; i < n; i++) {
        if (i > 0) { // N?u i l?n hon 0, t?c là chúng ta dang xét dãy con có ít nh?t 2 s?
            sum1 += a[i];
            sum2 = min(sum1, sum2); // C?p nh?t t?ng nh? nh?t
        } else {
            sum1 = a[i]; // N?u i = 0, b?t d?u tính t?ng m?i t? s? dó
            sum2 = min(a[i], sum2); // C?p nh?t t?ng nh? nh?t
        }

        if (sum1 > 0) // N?u t?ng c?a dãy con l?n hon 0, b? qua dãy con này
            sum1 = 0;
    }

    printf("%lld", sum2);
    return 0;
}
