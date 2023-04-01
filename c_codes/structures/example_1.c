#include <stdio.h>
#include <string.h>

struct Student
{
  char name[50];
  int class;
  char section;
}; 

int main()
{
   // created variable student1 for structure Student 
   struct Student student1 = {"Student_name" , 1, 'A'};
  
  // printing values 
  printf( "Student Name : %s\n", student1.name);
  printf( "Student Class : %d\n", student1.class);
  printf( "Student Section : %c\n", student1.section);
  
  return 0;
}
