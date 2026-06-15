// Write a program to transpose matrix.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of matrix: ");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter the elements of the matrix:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int b[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    printf("Transpose of matrix is:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}