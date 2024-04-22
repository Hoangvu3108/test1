#include <stdio.h>
#include <stdbool.h>


bool isPalindrome(int number) {
    int reversed = 0;
    int temp = number;
    while (temp > 0 && temp %2==0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    return reversed == number;
}
int main() {
    int number;
    printf("Nh?p m?t s?: ");
    scanf("%d", &number);
    
	if (isPalindrome(number) /*&& hasOddDigits(number)*/ )
	printf("day la so dep");
	else 
	printf("khong phai");
    return 0;
}

