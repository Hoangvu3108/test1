#include <stdio.h>=
int main() {
    int n;
    
    // Nh?p s? nguy�n duong n
   // printf("Nhap so nguy�n duong n: ");
    scanf("%d", &n);

////    if (n <= 0) {
////        printf("n ph?i l� s? nguy�n duong.\n");
////        return 1;
//    }
    int arr[n];
    // Nh?p n s? nguy�n duong l?n lu?t l� c�c ph?n t? c?a d�y
  //  printf("Nh?p %d s? nguy�n duong:\n", n);
    for (int i = 0; i < n; i++) {
     //   printf("Nh?p ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // �?m t?n s? xu?t hi?n c?a t?ng s?
  //  printf("T?n s? xu?t hi?n c?a c�c s?:\n");
    for (int i = 0; i < n; i++) {
        // Ki?m tra xem d� d?m t?n s? c?a s? n�y chua
        int daDem = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                daDem = 1;
                break;
            }
        }
        if (daDem) {
            continue;
        }

        // N?u chua d?m t?n s? c?a s? n�y, d?m v� in ra
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        printf("%d - %d;", arr[i], count);
    }

    return 0;
}

