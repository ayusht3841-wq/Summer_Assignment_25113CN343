// Write a program to compress a string.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);
    
    int count;

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

        if(already_printed) //means already_printed==1
        {
            continue;
        }

        count=0;
        
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }

    printf("%c=%d\n",str[i],count);
    }
    
    return 0;
}