//Write a program to write function to find maximum.
#include<stdio.h>

int max(int n1,int n2,int n3)
{
    if(n1>n2)
    {
        if(n1>n3)
        {
            return n1; 

        }
    }

    else if(n2>n3)
    {
        return n2;
    }

    else
    {
        return n3;
    }
}
int main()
{
    int a,b,c,maximum;

    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    maximum=max(a,b,c);
    printf("Maximum of three number is: %d",maximum);

    return 0;
}