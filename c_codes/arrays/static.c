#include <stdio.h>

int main () {
	static int var=5;
	printf("%d\n",var--);
	if(var)
		main();

	return 0;
}



