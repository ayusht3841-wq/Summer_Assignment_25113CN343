// Write a program to reverse a string.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);

    int count=0;
    int i=0;

    while(str[i]!='\0')
    {
        count++;
        i++;
    }

    printf("Reverse string is: ");

    for(int i=count-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}