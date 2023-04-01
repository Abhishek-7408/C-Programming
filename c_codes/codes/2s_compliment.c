/*
 *C program to find 2's complement of a binary number
 */

#include <stdio.h>
#include <string.h>

#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, carry=1;

    /*
     * Reads binary number from user
     */
    printf("Enter any %d bit binary value: ", SIZE);
    gets(binary);

    /*
     * Finds the 1's complement of the binary number
     */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i]=='1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i]=='0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';

    /*
     * Adds 1 to the 1's complement of the binary number to get 2's complement
     */
    for(i=SIZE-1; i>=0; i--)
    {
        if(onesComp[i]=='1' && carry==1)
        {
            twosComp[i] = '0';
        }
        else if(onesComp[i]=='0' && carry==1)
        {
            twosComp[i] = '1';
            carry = 0;
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
    }
    twosComp[SIZE] = '\0';

    printf("\nOriginal binary value = %s\n", binary);
    printf("One's complement = %s\n", onesComp);
    printf("Two's complement = %s\n", twosComp);

    return 0;
}

