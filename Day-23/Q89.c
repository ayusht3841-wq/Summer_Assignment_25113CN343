// Write a program to find first non-repeating character.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);

    int count=0,frequency,found=0;

    while(str[count]!='\0')
    {
        count++;
    }

    for(int i=0;i<count;i++)
    {
        frequency=0;

        for(int j=0;j<count;j++)
        {
            if(str[i]==str[j])
            {
                frequency++;
            }
        }

        if(frequency==1)
        {
            printf("First non-repaeating charcter: %c",str[i]);
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("N0 non-repeating characters found");
    }

    return 0;
}