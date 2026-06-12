//Write a program to find missing number in array.
#include<stdio.h>
int main()
{
    int n,expectedsum,actualsum=0; 

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n-1]; //Since one number is missing user will enter n-1 numbers.

    printf("Enter elements of array: ");

    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        actualsum=actualsum+a[i];
    }

    expectedsum=(n*(n+1))/2;

    int ME; //Missing Element

    ME=expectedsum-actualsum; 

    printf("Missing element is: %d",ME);

    return 0;
}