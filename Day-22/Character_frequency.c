// Write a program to character frequency.
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
        int already_printed=0;

        for(int k=0;k<i;k++)
        {
            if(str[i]==str[k])
            {
                already_printed=1;
                break;
            }
        }

        if(already_printed==1)
        {
            continue; //Used to skip current loop iteration and go to next iteration.
        }

        int char_frequency=0;

        for(int j=0;j<count;j++)
        {
            if(str[i]==str[j])
            {
                char_frequency++;
            }
        }
        
        printf("Character %c occurs %d time\n",str[i],char_frequency);
    }

    return 0;
}
