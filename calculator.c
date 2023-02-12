#include <stdio.h>
int main(){
    char op;
    double x,y;
    printf("Enter the operator (+,-,*,/):");
    scanf("%c",&op);
    printf("Enter two operand");
    scanf("%lf %lf", &x,&y);
    switch(op){
        case '+':
        printf("%lf+%lf=%lf",x,y,x+y);
        break;
        case '-':
        printf("%lf-%lf=%lf",x,y,x-y);
        break;
        case '/':
        printf("%lf/%lf=%lf",x,y,x/y);
        break;
        case '*':
        printf("%lf*%lf=%lf",x,y,x*y);
        break;
        default:
        printf("Error");
        break;
        
    }
    return 0;
    
}