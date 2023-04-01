#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* while loop execution */
   while( a < 20 ) {
   
      printf("value of a: %d\n", a);
      a=a+2;
		
      if( a > 15) {
         /* terminate the loop using break statement */
         break;
      }
		
   }
 
  // return 2.9;
}
