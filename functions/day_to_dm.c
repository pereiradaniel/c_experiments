 /* Day of Year to Day of Month and Month
  * day_to_dm.c
  */

 #include <stdio.h>

 // day_to_dm return day and month of given day in year 
 // assumes not leap year
 //
 void day_to_dm(int day, int *d, int *m)
 {
         if (day < 32) {
                 *m = 1;
                 *d = day;
         } else if (day < 60) {
                 *m = 2;
                 *d = day - 31;
         } else if (day < 91) {
                 *m = 3;
                 *d = day - 59;
         } else if (day < 121) {
                 *m = 4;
                 *d = day - 90;
         } else if (day < 152) {
                 *m = 5;
                 *d = day - 120;
         } else if (day < 182) {
                 *m = 6;
                 *d = day - 151;
         } else if (day < 223) {
                 *m = 7;
                 *d = day - 181;
         } else if (day < 254) {
                 *m = 8;
                 *d = day - 222;
         } else if (day < 284) {
                 *m = 9;
                 *d = day - 253;
         } else if (day < 305) {
                 *m = 10;
                 *d = day - 283;
         } else if (day < 335) {
                 *m = 11;
                 *d = day - 304;
         } else if (day < 366) {
                 *m = 12;
                 *d = day - 334;
         }
 }

 int main(void)
 {
         int day, d, m;

         printf("Day of Year : ");
         scanf("%d", &day);
         day_to_dm(day, &d, &m);
         printf("Day/Month is %d/%d\n", d, m);

         return 0;
 }