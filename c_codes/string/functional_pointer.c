#include <stdio.h>
 
int main () {

	int display();
	int (*fp)();
	fp=display;
	fp();
	return 0;
}

int display()
{
	printf("welcome\n");
}
