#include <stdio.h>
#include <string.h>

struct node
{
    int a;
    float b;
};
int main()
{
    struct node e;
    e={8,88.3};
    printf("%d",e.a);
    return 0;

}