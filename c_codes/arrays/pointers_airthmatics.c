#include <stdio.h>
 
int main () {

	int i=3,*ii;
	ii=&i;
	printf("Address of i=%u\n",ii);
	printf("VALUE of i=%u\n",*ii);
	ii++;
	printf("Address of i=%u\n",ii);	
	printf("value of i=%u\n",*ii);
	ii--;
	printf("Address of i=%u\n",ii);
	printf("Address of i=%u\n",*ii);
	
	return 0;
}	
