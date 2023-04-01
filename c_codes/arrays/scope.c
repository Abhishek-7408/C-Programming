//http://www.geeksforgeeks.org/scope-rules-in-c/
/* A Block is a set of statements enclosed within left and right braces ({ and } respectively). Blocks may be nested in C (a block may contain other blocks inside it). A variable declared in a block is accessible in the block and all inner blocks of that block, but not accessible outside the block.

What if the inner block itself has one variable with the same name?
If an inner block declares a variable with the same name as the variable declared by the outer block, then the visibility of the outer block variable ends at the pint of declaration by inner block. */

#include <stdio.h>

int main()
{
  {
      int x = 10, y  = 20;
      {
          // The outer block contains declaration of x and y, so 
          // following statement is valid and prints 10 and 20
          printf("x = %d, y = %d\n", x, y);
          {
              // y is declared again, so outer block y is not accessible 
              // in this block
              int y = 40;
    
              x++;  // Changes the outer block variable x to 11
              y++;  // Changes this block's variable y to 41
      
              printf("x = %d, y = %d\n", x, y);
          }
 
          // This statement accesses only outer block's variables
          printf("x = %d, y = %d\n", x, y);
      }
  }
  return 0;
}
