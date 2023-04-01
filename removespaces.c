#include<stdio.h> 

// Function to remove all spaces from a given string
void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;
    // Traverse the provided string. If the current character is not a space,
    //move it to index 'count++'.
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is incremented
    str[count] = '\0';
}
// Driver program to test above function
int main()
{
    char str[] = "I am Abhishek Kushwaha ";
    removeSpaces(str);
    printf("%s", str);
    return 0;
}