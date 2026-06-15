// Write a program to find diagonal sum.
#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter the size of matrix: ");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter the elements of first matrix:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf("Diagonal sum of matrix is: %d",sum);

    return 0;
}