// Write a program to find longest word.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    int max_len = 0; //longest word length seen so far
    int max_start = 0; //where longest word starts 

    int current_len = 0; //Length of current word
    int current_start = 0; //Where current word starts

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0') //Condition is not given loop runs forever
        {
            if(current_len == 0)
            {
                current_start = i;
            }

            current_len++;
        }
        else
        {
            if(current_len > max_len)
            {
                max_len = current_len;
                max_start = current_start;
            }

            current_len = 0;

            if(str[i] == '\0')
            {
                break;
            }
        }
    }

    printf("Longest word is: ");

    for(int i = max_start; i < max_start + max_len; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}