// Write a program to Find common characters in strings.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the first string: ");
    scanf("%s",str);

    char str1[100];

    printf("Enter the second string: ");
    scanf("%s",str1);

    for(int i=0;str[i]!='\0';i++)
    {
        int already_printed=0;

        for(int k=0;k<i;k++)
        {
            if(str[i]==str[k])
            {
                already_printed=1;
                break;
            }
        }

        if(already_printed)
        {
            continue;
        }

        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str1[j])
            {
                printf("%c",str[i]);
                break;
            }
        }
    }

    return 0;
}