#include <stdio.h>
void OddEven(int i);

void OddEven(int i)
{
    // true if num is perfectly divisible by 2
    if(i % 2 == 0)
        printf("%d is even.", i);
    else
        printf("%d is odd.", i);
}


void main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    OddEven(num);
}
