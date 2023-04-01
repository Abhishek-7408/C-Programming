#include <stdio.h>
 
int main () {

	int aaa();
	int bbb();
	int ccc();
	int (*ptr[3])();
	ptr[0] = aaa;
	ptr[1] = bbb;
	ptr[2] = ccc;
	
	(*ptr[2])();
	
	return 0;
}

aaa()
{
	printf("aaa\n");
}

bbb()
{
	printf("bbb\n");
}

ccc()
{
	printf("ccc\n");
}

