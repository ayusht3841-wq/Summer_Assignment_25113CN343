// Write a program to check anagram strings.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the first string: ");
    scanf("%s",str);

    char str1[100];

    printf("Enter the second string: ");
    scanf("%s",str1);

    int count=0;
    int count1=0;

    while(str[count]!='\0')
    {
        count++;
    }

    while(str[count1]!='\0')
    {
        count1++;
    }

    if(count!=count1)
    {
        printf("Strings are not anagrams");
        return 0; //To stop the program immediately as strings are not anagram so no need to check further.
    }

    for(int i=0;i<count;i++)
    {
        int freq=0;
        int freq1=0;

        for(int j=0;j<count1;j++)
        {
            if(str[i]==str[j])
            {
                freq++;
            }

            if(str[i]==str1[j])
            {
                freq1++;
            }
        }

        if(freq!=freq1)
        {
            printf("Strings are not anagrams");
            return 0;
        }
    }

    printf("Strings are anagrams");

    return 0;
}