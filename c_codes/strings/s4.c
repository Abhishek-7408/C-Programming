#include <stdio.h>

int main () {
    char *str[] = {"all","you","need","is","focus"};

    printf("%d %d \n",sizeof(str),sizeof(str[0]));
    return 0;
}
