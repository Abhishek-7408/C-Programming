#include <stdio.h>
 
int main () {

	int i=3;
	int *j=&i;
	int **k=&j;
	printf("Address of i=%u\n",&i);	
	//printf("Value of i=%d\n",i);
	//printf("Value of i=%d\n",*(&i));
	//printf("\n");
	printf("Value of i=%d\n",j);
	printf("Value of i=%d\n",*k);
	printf("\n");
	
	int p=4;
	float f=3.14;
	//int *pp;
	//float *ff;
	char *pp,*ff;	
	pp=&p;
	ff=&f;

	printf("Address of p=%u\n",pp);
	printf("Address of f=%u\n",ff);
	printf("Value of p=%d\n",*pp);
	printf("Value of f=%f\n",*ff);
	
	
	return 0;
}
