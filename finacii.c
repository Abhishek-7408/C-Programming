#include <stdio.h>
int fibonacii(int i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }
    return fibonacii(i-1)+fibonacii(i-2);
}
int main(){
    int i,n;
    printf("enter digit of fibonacii:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\n",fibonacii(i));
    }
    return 0;
}