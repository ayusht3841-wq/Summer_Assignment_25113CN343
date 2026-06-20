// Write a program to remove duplicate characters.
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

    for(int i=0;i<count;i++)
    {
        int duplicate=0;

        for(int j=i+1;j<i;j++)
        {
            if(str[i]==str[j])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate==0)
        {
            printf("%c",str[i]);
        }
    }

    return 0;
}