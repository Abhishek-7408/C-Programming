#include <stdio.h>

int incr(int i)
{
	static int count=0;
	count=count+i;
	return count;
}
main () {
	int i,j;
	for(i=0; i<5; i++)
		j=incr(i);
	printf("%d\n",j);
}
