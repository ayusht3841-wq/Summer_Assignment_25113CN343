//Write a program to move zeroes to end.
#include<stdio.h>
int main()
{
    int n,count=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements of array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++) //Moving non-zero elements to the front
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }

    while(count<n) //Filling remaining positions with zer0
    {
        arr[count]=0;
        count++;
    }

    printf("Array after moving zeroes to end:\n");

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}