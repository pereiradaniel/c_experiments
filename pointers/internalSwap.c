#include <stdio.h>

 void internal_swap (int a, int b)
 {
         int c;

         printf("a is %d, b is %d\n", a, b); 

         c = a;
         a = b;
         b = c;

         printf("a is %d, b is %d\n", a, b);
 }

 int main(void)
 {
         int a, b;

         printf("a is ");
         scanf("%d", &a);
         printf("b is ");
         scanf("%d", &b);

         internal_swap(a, b);

         printf("After internal_swap:\na is %d\n" 
          "b is %d\n", a, b);

         return 0;
 }
