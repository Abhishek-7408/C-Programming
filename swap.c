#include <stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=22,y=55;
    printf("hello world %d %d\n",x,y);
    swap(x,y);
    printf("hello world %d %d",x,y);

    return 0;
}