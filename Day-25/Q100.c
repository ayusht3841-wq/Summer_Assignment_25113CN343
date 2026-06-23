// Write a program to sort words by length.
#include <stdio.h>
#include <string.h>

int main()
{
    char words[100][100];
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%s",words[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-1-i;j++)
        {
            if(strlen(words[j]) > strlen(words[j + 1]))
            {
                char temp[100];

                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words after sorting by length:\n");

    for(int i=0; i<n;i++)
    {
        printf("%s ", words[i]);
    }

    return 0;
}