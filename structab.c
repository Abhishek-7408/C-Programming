#include <stdio.h>
#include <string.h>
struct a
{
 char ch[7];
 char *str;   
};
struct b
{
    char *c;
    struct a s1;
}
int main()
{
    struct b s2={"kanpur","raipur","jaipur"};
    printf("%s %s",s2.c,s2.s1,str);
    printf("%s %s",s2.c,s2.s1,str);
    return 0;


}