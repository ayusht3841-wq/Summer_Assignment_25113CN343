// Write a program to create menu-driven string operations system.
#include<stdio.h>
int main()
{
    int choice=0;

    int entered=0;

    char str[50];

    while(choice!=8)
    {
        printf("\n===== MENU DRIVEN STRING OPERATION =====\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find length\n");
        printf("4. Reverse String\n");
        printf("5. Count Vowels\n");
        printf("6. Count Words\n");
        printf("7. Check Palindrome\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("Enter string: ");
            scanf(" %[^\n]",str);
            
            entered=1;
        }

        else if(choice>=2 && choice<=7 && entered==0)
        {
            printf("Please enter the string first.\n");
        }

        else if(choice==2)
        {
            printf("String is: %s",str);
        }

        else if(choice==3)
        {
            int count=0;

            while(str[count]!='\0')
            {
                count++;
            }

            printf("String length:%d",count);
        }

        else if(choice==4)
        {
            int count=0;
            int i=0;
            while(str[i]!='\0')
            {
                count++;
                i++;
            }
            
            printf("Reverse string is: ");
            for(int i=count-1;i>=0;i--)
            {
                printf("%c",str[i]);
            }
        }

        else if(choice==5)
        {
            int i=0;
            int count_vowel=0;
            
            while(str[i]!='\0')
            {
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A'  || str[i]=='O' || str[i]=='E' || str[i]=='I' || str[i]=='U')
                {
                    count_vowel++;
                }

                i++;
            }

            printf("Vowel count:%d",count_vowel);
        }

        else if(choice==6)
        {
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
        }

        else if(choice==7)
        {
            int count=0;
            while(str[count]!='\0')
            {
                count++;
            }
            
            int palindrome=1;
            
            for(int i=0,j=count-1;i<j;i++,j--)
            {
                if(str[i]!=str[j])
                {
                    palindrome=0;
                    break;
                }
            }
            
            if(palindrome==1)
            {
                printf("Palindrome string");
            }
            
            else
            {
                printf("Not a palindrome string");
            }
        }

        else if(choice == 8)
        {
            printf("Thank you for using the String operation system!\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    }

    return 0;
}