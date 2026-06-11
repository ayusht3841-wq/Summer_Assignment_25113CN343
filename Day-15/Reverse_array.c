//Write a program to reverse array.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int b[n];
    printf("Reverse is: ");

    for(int i=0;i<n;i++)
    {
        b[i]=a[(n-1)-i];
        printf("%d ",b[i]);
    }

    return 0;
}