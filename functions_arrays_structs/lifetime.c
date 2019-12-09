/* Avoid Variables of the Same Name
* lifetime.c
*/

#include <stdio.h>

void foo(int x)
{
     int i = 4;
     do {
             int x = i;  // Var x within the code block hides the local parameter x until the end of the iteration.
             printf("%d ", x);
             i--;
     } while(i > 0);
     printf("%d ", x);
}

int main(void) {
     foo(6);
     return 0;
}