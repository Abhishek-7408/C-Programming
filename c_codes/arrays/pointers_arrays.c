#include <stdio.h>
 
int main () {

	int x=4;

	
	int num[]={1,2,3,4,5};
	int i=0;
	int *j;
	j=&num[0];
	(++*j)++;
	printf("address=%u\n",num);
	printf("Value=%u\n",*num);
	while(i<5)
	{
		printf("\nAddress=%u ",&num[i]);
		//printf("Value = %d ",num[i]);
		printf("Value=%d\n",*j);
		j++;	
		//printf("%d ",*(i+num));
		//printf("%d ",*(num+i));	
		//printf("%d\n",i[num]);
		i++;
		
	}
}
