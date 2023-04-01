#include <stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=55,y=80;
    printf("Value before swap %d %d\n",x,y);
    swap(&x,&y);
    printf("value after swap %d %d:",x,y);
    return 0;
}