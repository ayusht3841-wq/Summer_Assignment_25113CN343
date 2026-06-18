// Write a program to count words in a sentence.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%[^\n]",str);

    int count_spaces=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count_spaces++;
        }
    }

    int number_of_words=count_spaces+1;

    printf("Word count in a sentence: %d",number_of_words);
    
    return 0;
}