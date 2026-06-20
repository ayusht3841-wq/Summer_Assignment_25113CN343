// Write a program to check string rotation.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Enter the first string: ");
    scanf("%s",str);

    char str1[100];

    printf("Enter the second string: ");
    scanf("%s",str1);

    if(strlen(str)!=strlen(str1))
    {
        printf("Not a rotation");
        return 0;
    }

    char str2[100];

    strcpy(str2,str);
    strcat(str2,str);

    if(strstr(str2,str1)!=NULL)
    {
        printf("Strings are rotation");
    }

    else
    {
        printf("Strings are not rotations");
    }

    return 0;
}