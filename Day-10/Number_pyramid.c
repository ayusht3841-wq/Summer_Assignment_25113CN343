#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++) //For spaces
        {
            printf(" ");
        }

        for(int j=1;j<=i;j++) //Number triangle
        {
            printf("%d",j);
        }

        int a=i-1;
        for(int q=1;q<=i-1;q++) //For extra elements.
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }

    return 0;
}