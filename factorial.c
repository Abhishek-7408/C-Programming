#include <stdio.h>
int factorial(int n){
if(n==0)
return 1;
else
return factorial((n-1)*n);
}
int main(){
    int a,fact;
    printf("enter a nuber to find factorial");
    scanf("%d",&a);
    fact=factorial(a);
    printf("Factorial of %d=%d",a,fact);
return 0;
}



