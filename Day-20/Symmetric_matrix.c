// Write a program to check symmetric matrix.
#include<stdio.h>
int main()
{
    int n,symmetric=1;

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

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                symmetric=0;
                break;
            }
        }

        if(symmetric==0)
        {
            break;
        }
    }

    if(symmetric==1)
    {
        printf("Symmetric matrix");
    }

    else
    {
        printf("Not a symmetric matrix");
    }

    return 0;
}
