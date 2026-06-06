#include<stdio.h>
int main()
{
    for(int i=65;i<=69;i++)
    {
        for(int k=1;k<=69-i;k++)
        {
            printf(" ");
        }

        for(int j=65;j<=i;j++)
        {
            printf("%c",j);
        }

        int a=i-1;
        for(int q=65;q<=i-1;q++)
        {
            printf("%c",a);
            a--;
        }
        printf("\n");
    }

    return 0;
}