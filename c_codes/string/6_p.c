#include <stdio.h>
 
int main () {

	int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *p[] = {a, a + 1, a + 2};
    int i, j;

    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("%d \n ", *(*(p + i) + j));
        }
         
    }
	return 0;
}
