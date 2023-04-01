//http://www.geeksforgeeks.org/scope-rules-in-c/
/* What about functions and parameters passed to functions?
A function itself is a block. Parameters and other local variables of a function follow the same block scope rules.

Can variables of block be accessed in another subsequent block?*
No, a variabled declared in a block can only be accessed inside the block and all inner blocks of this block. For example, following program produces compiler error. */

#include <stdio.h>

int main()
{
  int x = 1, y = 2, z = 3;
  printf(" x = %d, y = %d, z = %d \n", x, y, z);
  {
       int x = 10;
       float y = 20;
       printf(" x = %d, y = %f, z = %d \n", x, y, z);
       {
             int z = 100;
             printf(" x = %d, y = %f, z = %d \n", x, y, z);
       }
  }
  return 0;
}
