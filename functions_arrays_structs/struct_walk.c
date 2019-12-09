// Structure Types - Walkthrough
// struct_walk.c

#include <stdio.h>

// Declare structs
struct A
{
   int x;
   double r;
};

// Function prototypes
void foo(struct A* c);
struct A goo(struct A d);

// Main program
int main(void)
{
   struct A a = {4, 6.67}, b;

   foo(&a);
   printf("00%d.%.3lf.111\n", a.x, a.r);
   b = goo(a);
   printf("00%d.%.3lf.112\n", a.x, a.r);
   printf("%d.%.3lf.113\n", b.x, b.r);
}

// Function definitions

// foo()
// Accepts struct A pointer as var c (pass by ADDRESS using pointer)
// Initializes i
// Sets i to value of c.x (an int, in this case "4")
// Sets c.x to c.r (a double, in this case "6.67" which is truncated to 6)
// Sets c.r to modulus of c.x and i + 202.134
void foo(struct A* c)
{
   int i;

   i = c->x;
   c->x = c->r;
   c->r = c->x % i + 202.134;
}

// goo()
// Accepts struct A as var d (pass by VALUE)
// Initializes empty struct type A as var e
// d.x set to d.r (truncated from a.r 6.67) - 62
// Set e to d
// Returns e
struct A goo(struct A d)
{
   struct A e;

   d.x = d.r - 62;
   e = d;
   return e;
}