#include <stdio.h>
 
/* function declaration */
//void swap(int x, int y);

/* function definition to swap the values */
void swap(int a, int b) {

   int temp;

   temp = a; /* save the value of x */
   a = b;    /* put y into x */
   b = temp; /* put temp into y */
  
   return;
}
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
 
   /* calling a function to swap the values */
   swap(a, b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   return 0;
}
