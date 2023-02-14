#include <stdio.h>
int main(){
    int n=10;
    char str[]="The is the";
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='t' && str[i+1]=='h' && str[i+2]='e')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}