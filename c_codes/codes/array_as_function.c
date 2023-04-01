#include <stdio.h>
 
/* function declaration */
double getAverage(int arr[], int size);

double getAverage(int arr[], int size) { //

   int i;
   double avg;
   double sum = 0;

   for (i = 0; i < size; ++i) {
      sum += arr[i]; // 0 + 1000 = 1000
   }

   avg = sum / size;

   return avg;
}


int main () {

   /* an int array with 5 elements */
   int balance[5] = {100, 2, 3, 17, 50};
   double avg;

   /* pass pointer to the array as an argument */
   avg = getAverage( balance, 5 ) ; // getAverage(1000, 5)
 
   /* output the returned value */
   printf( "Average value is: %f ", avg ); // final output 
    
   return 0;
}
