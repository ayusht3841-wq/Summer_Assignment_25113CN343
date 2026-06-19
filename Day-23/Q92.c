// Write a program to find maximum occuring character.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);

    int max_freq=0;
    int count1;
    int i;
    char max_char;

    for(i=0;str[i]!='\0';i++)
    {
        count1=0;

        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count1++;
            }
        }

        if(max_freq<count1)
        {
            max_freq=count1;
            max_char=str[i];
        }
    }

    printf("Maximum occuring character is:%c",max_char);

    return 0;
}