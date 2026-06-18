// Write a program to remove spaces from string.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]",str); //For reading spaces

    int j=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }

    str[j]='\0';

    printf("String after removing spaces: %s",str);
    
    return 0;
}