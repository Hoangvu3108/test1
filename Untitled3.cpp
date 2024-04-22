#include <stdio.h>=
int main() {
    int n;
    
    // Nh?p s? nguyên duong n
   // printf("Nhap so nguyên duong n: ");
    scanf("%d", &n);

////    if (n <= 0) {
////        printf("n ph?i là s? nguyên duong.\n");
////        return 1;
//    }
    int arr[n];
    // Nh?p n s? nguyên duong l?n lu?t là các ph?n t? c?a dãy
  //  printf("Nh?p %d s? nguyên duong:\n", n);
    for (int i = 0; i < n; i++) {
     //   printf("Nh?p ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Ð?m t?n s? xu?t hi?n c?a t?ng s?
  //  printf("T?n s? xu?t hi?n c?a các s?:\n");
    for (int i = 0; i < n; i++) {
        // Ki?m tra xem dã d?m t?n s? c?a s? này chua
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

        // N?u chua d?m t?n s? c?a s? này, d?m và in ra
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

