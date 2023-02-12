#include <stdio.h>
int fibonacii_01(int i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }
    return fibonacii_01(i-1)+fibonacii_01(i-2);
}
int main(){
    int i,n;
    printf("Enter a number for fibonacii:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\n ",fibonacii_01(i));
    }
return 0;
}