#include <stdio.h>

int main () {
	char a[]="good";
	char *s="good";
	a[2]='w';
	//s[2]='w';
	printf("%s %s\n",a,s);
	//printf("%d %d\n",sizeof(a),strlen(a));

	printf("%c\n",*a);
	printf("%c\n",*(s+1));
	printf("%c\n",*(a+2));
	return 0;
}
