#include <stdio.h>
 
int main () {
	
	int a[] = {12,7,13,4,11,6};
	printf("%d\n", func(a,4));
	return 0;
}

int func( int *a, int n)
{
	if( n<=0 )
		return 0;
	else if( *a%2==0 )
		return *a+func(a+2, n-1);
	else
		return *a - func(a+1, n-1);
}

