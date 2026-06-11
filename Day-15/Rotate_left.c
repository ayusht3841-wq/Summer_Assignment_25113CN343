//Write a program to rotate array left.
#include<stdio.h>

void reverse(int arr[],int a,int b)
{
    for(int i=a,j=b;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements of array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int k; //By how many places array is to be rotated

    printf("Enter the value of k: ");
    scanf("%d",&k);

    //Steps

    k=k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}