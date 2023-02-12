// Write a program in c to print all unique element in an array?
#include <stdio.h>
void input(int a[], int n);
void show(int a[], int n);

int main(){
  int i=0,j,k=0,n;
  int a[10];
  int b[10];
  printf("Enter number of elements: "); //number of elements you want to store.
  scanf("%d", &n);
  input(a,n);
  printf("\nArray before change!\n");
  show(a,n);

  //removing duplicate elements from array.
    for(i=0; i<n ; i++){
        for(j=i-1 ; j>=0 ; j--)
            if(a[j]==a[i])
                goto down;
        b[k++] = a[i];  // storing unique elements in array b.
        down: ;
    }
    
  printf("\n----------------------------------------");
  printf("\nArray after change!\n");
  show(b , k);
return 0;
}
//------------------------------------------------------------------------------
void input(int a[], int n){
  for(int i=0; i < n; i++)
        scanf("%d", &a[i]);
}

void show(int a[], int n){
  for(int i=0; i < n; i++)
        printf("%d ", a[i]);
}




//Source: https://stackoverflow.com/questions/68689598


