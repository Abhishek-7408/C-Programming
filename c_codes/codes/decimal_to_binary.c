
#include<stdio.h>

int main()
{
  unsigned int i, b[32] = {0};
  int j = 31, count = 0;
  printf("\nEnter the unsigned integer:");
  scanf("%d", &i);

  while(i != 0)
  {
    // Bitwise AND operation b/w i & 0x00000001 is 1
    // if the last bit of i is 1 and 0 if the last
    // last bit is 0
    b[j] = i & 0x00000001; 
    // Increment count whenever the bit is 1    
    if(b[j] == 1)
      count++;
    j--;
    // Right shifting i by 1 to get the next bit
    i = i >> 1;
  }

  printf("\nThe number of bits set is %d", count);

  // The array b gives the binary representation of i
  printf("\nThe binary representation is ");
  for(i = j + 1; j < 32; j++)
    printf("%d", b[j]); 

  return 0;
}
