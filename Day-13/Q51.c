//Write a program to find largest and smallest element.
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int max=INT_MIN;//It is used to assign max the minimum value of integer possible.
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    printf("Largest element is: %d\n",max);

    int min=INT_MAX;//It is used to assign min the maximum value of integer possible.
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }

    printf("Smallest element is: %d",min);

    return 0;
}