#include <stdio.h>
int main(){
int var=5;
printf("%d\n",var--);
if(var)
main();
return 0;
}