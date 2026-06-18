// Write a program to check palindrome string.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);

    int count=0;

    while(str[count]!='\0')
    {
        count++;
    }

    int palindrome=1;
    
    for(int i=0,j=count-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            palindrome=0;
            break;
        }
    }

    if(palindrome==1)
    {
        printf("Palindrome string");
    }

    else
    {
        printf("Not a palindrome string");
    }
    
    return 0;
}