#include<stdio.h>
 void move(int n, char A, char C, char B)
 {
   if (n == 1) {
      printf("Move 1 disk from %c to %c\n", A, C);
   }
   else {
      move(n - 1, A, B, C);
      move(1, A, C, B);
      move(n - 1, B, C, A);
   }
 }
 int main() {
   int n = 5;
   char A,B,C;
   move(n, 'A',	'C', 'B');
   return  0;
 }
