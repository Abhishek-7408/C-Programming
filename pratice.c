// Writr a program in c to find the sum of digits of number using recursion?
/* test Data:
input any number to find the sum of digits : 25
3
Expected output:
the sum of digits of 25=7 */
#include <stdio.h>

int main()
{
  int Number, Reminder, Sum=0;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);

  while(Number > 0)
  {
     Reminder = Number % 10;
     Sum = Sum+ Reminder;
     Number = Number / 10;
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);

  return 0;
}



