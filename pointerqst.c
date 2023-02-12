#include <stdio.h>
int main(){
    int x=5,y=10,count;
    for(count=1;count<=2;++count){
        y+=funf(x)+fung(x);
        printf("%d",y);
    }
}
funf(int x){
    int y;
    y=fung(x);
    
    return y;
}
fung(int x){
    static int y=10;
    y=y+1;
    return x+y;
}