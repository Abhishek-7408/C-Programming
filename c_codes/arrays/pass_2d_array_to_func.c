#include <stdio.h>

int main () {
	int a[3][3]={1,2,3,4,5,6,7,8,9};  // base 1000
	
	display(a,3,3);
	show(a,3,3);
	
	return 0;
}


display( int *q, int row, int col)  // q=1000  //int q[][]
{
	int i,j;
	
	for( i=0; i<row; i++ )
	{
		for( j=0; j<col; j++ )
			printf("%d\t", *(q+i*col+j)); //*(1000 + 1*3  + 0)// q[i][j]
		printf("\n");
	}
	printf("\n");
}

show( int (*q)[3], int row, int col) // (*q)[3] pointer to an array of 3 ele  // *q[3] array of 3 pointers
{
	int i,j;
	int *p;
	
	for( i=0; i<row; i++ )
	{
		p = q + i; // p= 1000 + 1 = 1006
		for( j=0; j<col; j++ )
			printf("%d\t", *(p+j));
		printf("\n");
	}
	printf("\n");
}	
