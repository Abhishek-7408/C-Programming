#include <stdio.h>

int main () {
	char a[]="good";
	char *s="good";
	a[2]='w';
	//s[2]='w';
	
	//printf("%s %s\n",a,s);
	//printf("%d %d\n",sizeof(a),strlen(a));

	printf("%s\n",a);
	printf("%s\n",(s+1));
	printf("%s\n",(a+2));
	return 0;
}
