// Write a program to count vowels and consonants.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s",str);

    int i=0;
    int count_vowel=0;
    int count_consonant=0;

    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A'  || str[i]=='O' || str[i]=='E' || str[i]=='I' || str[i]=='U')
        {
            count_vowel++;
        }

        else
        {
            count_consonant++;
        }

        i++;
    }

    printf("Vowel count is:%d\n",count_vowel);
    printf("Consonant count is:%d",count_consonant);
}