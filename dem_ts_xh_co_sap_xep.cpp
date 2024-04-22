#include <stdio.h>

#define MAX_SIZE 100001

int a[MAX_SIZE], b[MAX_SIZE];

int main() {
    int n, Max, i;
    // Nh?p s? lu?ng ph?n t?
    scanf("%d", &n);

    // Nh?p m?ng s? nguyên
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Tìm ph?n t? l?n nh?t
    Max = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > Max) {
            Max = a[i];
        }
    }
//printf("%d\m",Max);
    // Kh?i t?o m?ng d?m b
    for (i = 0; i <= Max; i++) {
        b[i] = 0;
    }
//    for (i = 0; i <= Max; i++)
//	printf("%d",b[i]);
    // Ð?m s? l?n xu?t hi?n c?a t?ng ph?n t? trong m?ng a
    for (i = 0; i < n; i++) {
        b[a[i]] += 1;
    }
    printf("\n");
//	for(int i=0;i<n;i++)
//	printf("%d",b[a[i]]);
    // In ra s? l?n xu?t hi?n c?a t?ng ph?n t? theo th? t? tang d?n
    for (i = 0; i <= Max; i++) {
        if (b[i] > 0) {
            printf("%d - %d; ", i, b[i]);
        }
    }
    return 0;
}

