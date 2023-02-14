#include <stdio.h>
int main(){
    int n=3;
    char str[3]="THe";
    char com[3]="the";
    for(int i=0;i<n;i++){
        if(str[i]!=com[i])
    {
        printf("%d %c %c\n",i,str[i],com[i]);
    }
    }
    return 0;
}