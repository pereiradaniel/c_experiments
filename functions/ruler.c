 // Ruler Walkthrough
 // ruler.c

 #include <stdio.h>
 #define N 8
 void r(int a[], int n);

 int main(void)
 {
         int i, j, a[N];

         r(a, N);
         for (i = 0; i < N; i++ ){
                 printf("||");
                 for (j = 0; j < a[i]; j++ )
                         printf("-");
                 printf("\n");
         }
         return 0;
 }

 void r(int a[], int n)
 {
         int i, x;

         for (i = 0; i < n; i++){
                 x = i + 1;
                 a[i] = 1;
                 while (x % 2 != 0) {
                         a[i]++;
                         x /= 2;
                 }
         }
 }