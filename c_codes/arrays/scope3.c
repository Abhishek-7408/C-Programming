#include <stdio.h>

//int x = 1;
int main()
{
  {
      int x = 10;
      printf("%d\n", x);
  }

  {
      printf("%d\n", x); 
  }

  return 0;
}
