#include <stdio.h>

int main () {
    char a[] = "anoop dobhal";
    char *s = "anoop dobhal";

    printf("%d %d \n",sizeof(a),sizeof(s));
    printf("%d %d \n",sizeof(*a),sizeof(*s));
    return 0;
}
