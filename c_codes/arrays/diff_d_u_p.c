#include <stdio.h>

int main () {
    void *val = 0xffffffff;

    printf("d = %d\n", val);
    printf("u = %u\n", val);
    printf("p = %p\n", val);
    printf("p = %p\n", &val);
	

    return 0;
}
