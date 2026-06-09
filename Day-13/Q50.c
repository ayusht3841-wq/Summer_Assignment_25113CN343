//Write a program to find sum and average of array.
#include<stdio.h>
int main()
{
    int n,sum=0;
    
    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements: ");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    float avg=(float)sum/n;

    printf("Sum is: %d\n",sum);
    printf("Average is: %f",avg);

    return 0;
}