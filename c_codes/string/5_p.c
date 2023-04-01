#include <stdio.h>
 
int main () {

	int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *ptr;
    ptr = a;

	printf("%u  %d  %d \n", a[2],ptr[2],*(ptr+2));
	
	return 0;
}
