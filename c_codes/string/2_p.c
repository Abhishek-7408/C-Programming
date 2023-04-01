#include <stdio.h>
 
int main () {
	
	int a[] = {0,1,2,3,4};
	int *p[] = {a,a+1,a+2,a+3,a+4};
	int **ptr=p;

	a = a + 1;
	ptr++;
	printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

	*ptr++;
	printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

	*(++ptr);
	printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);	

	++(*ptr);
	printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

	return 0;
}
