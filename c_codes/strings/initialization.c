#include <stdio.h>
int main()
{
    char c[] = "abcd";

    char d[50] = "abcd";

    char e[] = {'a', 'b', 'c', 'd', '\0'};

    char f[5] = {'a', 'b', 'c', 'd', '\0'};

    char g[100];
    
    g = "C programming";  // Error! array type is not assignable.


    return 0;
}