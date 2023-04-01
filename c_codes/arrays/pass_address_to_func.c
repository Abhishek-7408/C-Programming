#include <stdio.h>

main () {
	int i;
	
	int marks[] = {11,12,13,14,15};
	
	display(&marks[i],5);

	printf("\n");
}

display( int *m, int n) // m=1000
{
	int i=1;
	while( i<=n )
	{
		printf("%d\t",*m); //12/13/14/15/error
		i++;
		m++;
	}
	//int **x = &m++;
}
