#include <stdio.h>

main () {
	int i;
	int marks[] = {11,12,13,14,15};
	
	for( i=0; i<5; i++)
		display(marks[i]);

	printf("\n");
}

display( int m)
{
	printf("%d\t",m);
}
