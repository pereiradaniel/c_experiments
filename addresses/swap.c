#include <stdio.h>

 void swap(int *p, int *q)
 {
         int c;

         c = *p;
         *p = *q;
         *q = c;
 }

 int main(void)
 {
         int a, b;

         printf("a is ");
         scanf("%d", &a);
         printf("b is ");
         scanf("%d", &b);

         swap(&a, &b);

         printf("After swap:\na is %d\n" 
                "b is %d\n", a, b);

         return 0;
 }

// Walkthrough Table

// The walkthrough table shows how the changes carry over to main()
// void                                int
// swap(int *p, int *q)                main(void)
// int *       int *       int         int         int
// p  q  c  a  b
// 0x0012FF78  0x0012FF7C  0x0012FF6C  0x0012FF88  0x0012FF84
//                                     5           6
// 0x0012FF88  0x0012FF84  ?           5           6
// 0x0012FF88  0x0012FF84  5           5           6
// 0x0012FF88  0x0012FF84  5           6           6
// 0x0012FF88  0x0012FF84  5           6           5
// 0x0012FF88  0x0012FF84  5           6           5