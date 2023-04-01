#include <stdio.h>
 
int main() {

   /* local variable definition */
   int a;

   /* do loop execution */
   for(a=10 ; a<20 ; a++) {
   
      if( a == 15) {
         a = a + 1;
         continue;
      }
		
      printf("value of a: %d\n", a);
      //a++;
     
   }
 
   return 0;
}
