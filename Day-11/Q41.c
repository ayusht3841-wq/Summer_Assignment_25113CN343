//Write a program to write function to find sum of two numbers.
#include<stdio.h>

int sum(int n1,int n2)
{
    return n1+n2;
}
int main()
{
    int a,b,addition;
    
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);

    addition=sum(a,b);
    printf("Addition is:%d",addition);

    return 0;
}