#include <stdio.h>

int main () {
    char a[] = "word2011";

    printf("%s \n",a + a[3] - a[1]);

    return 0;
}
