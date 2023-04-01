#include <stdio.h>
 
int main () {

	int a[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("%u  %u  %u  %d\n", a,*a,**a,***a);
	printf("%u  %u  %u  %d\n", a+1,*(a+1),*(*(a+1)),*(*(*(a+1))));
	printf("%u  %u  %u  %d\n", a,*a+1,**a+1,***a+1);
	
	return 0;
}
