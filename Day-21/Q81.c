// Write a program to Find string length without strlen().
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str); // No "&" required because string is a character array.

    int count=0;
    int i=0;

    while(str[i]!='\0') // '\0' is null character.
    {
        count++;
        i++;
    }

    printf("String length is: %d",count);

    return 0;
}