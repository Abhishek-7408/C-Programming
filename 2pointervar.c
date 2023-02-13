#include <stdio.h>
int main(){
    int *pc, c;
c = 5;
pc = &c;
c=25;
printf("value of c is %d\n",c);
printf("Address of c is %p\n",c);
printf("Value of ptr is %d\n",*pc);
printf("Address of pointer is %p\n",&pc);
return 0;





}