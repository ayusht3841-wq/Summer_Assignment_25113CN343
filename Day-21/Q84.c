// Write a program to convert lowercase to uppercase.
#include<stdio.h>
int main()
{
    char str[100];
    int uppercase;

    printf("Enter the string: ");
    scanf("%s",str);

    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
             int x= (int)str[i];
             uppercase=x-32;
             printf("%c",uppercase);
        }

        else
        {
            printf("%c",str[i]);
        }

        i++;
    }

    return 0;
}