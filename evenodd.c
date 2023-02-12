#include <stdio.h>
int main(){
    int x,y;
    printf("Enter a value");
    scanf("%d %d",x)
    if(x%2==0 && y%2!=0){
        printf("x=%d y=%d\n",x,y);
    }
    else{
        printf("Error");
    }
    return 0;
}