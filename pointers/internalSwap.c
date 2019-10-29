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


// Walkthrough Table

// The walkthrough table shows how the changes remain completely within internal_swap()

// void                                int
// local_swap(int a, int b)            main(void)
// int         int         int         int         int
// a           b           c           a           b
// 0x0012FF78  0x0012FF7C  0x0012FF6C  0x0012FF88  0x0012FF84
//                                     5           6
// 5           6           ?           5           6
// 5           6           5           5           6
// 6           6           5           5           6
// 6           5           5           5           6
// 6           5           5           5           6

// The hexadecimal values below the variable identifiers are their addresses in memory.  Note that the addresses of a and b in internal_swap() are different from those in main(). 

// The program copies the argument values (a and b) as initial values into parameters a and b.  The swapping only affects a and b in internal_swap().