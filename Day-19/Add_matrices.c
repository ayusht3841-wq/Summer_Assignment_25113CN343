//Write a program to Add matrices.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter the first matrix elements:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int b[n][n];

    printf("Enter the second matrix elements:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    int c[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            
        }
    }

     printf("Sum of matrix is:\n");

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}