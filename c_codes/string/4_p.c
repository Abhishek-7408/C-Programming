#include <stdio.h>
 
int main () {
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *p;
    int (*q)[3];
    p = a;
    q = a;

    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("%u %u %u \n", a + i, p, q);
        p++;
        q++;
    }

    return 0;
}
     