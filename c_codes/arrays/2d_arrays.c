#include <stdio.h>

int main () {
	int stu[3][2]={{11,21},{12,22},{13,23}}; 
	int i,j;

	printf("%u\n", stu); // 1000
	printf("%u\n", *(*(stu+1)+2)); //  ( stu + 1 ) = 1000 + 4 = * 1004 = 1004 + 2 = *1008 // 2d + 2
	
	for(i=0; i<3; i++)
	{
		printf("Address %u\n", stu[i]); // *(stu+1)  = 1000 , 1004, 1008
	}

	for(i=0; i<3; i++)
	{
		printf("\n");
		
		for(j=0; j<2; j++)
		{
			printf("%d\t",*(*(stu+i)+j)); //
		}
	}
	printf("\n");
return 0;
}
