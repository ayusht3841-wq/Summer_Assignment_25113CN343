// Write a program to multiply matrices.
#include<stdio.h>
int main()
{
    int r;

    printf("Enter the number of rows of first matrix: ");
    scanf("%d",&r);

    int c;

    printf("Enter the number of columns of first matrix: ");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter the elements of first matrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int p;

    printf("Enter the number of rows of second matrix: ");
    scanf("%d",&p);

    int q;

    printf("Enter the number of columns of second matrix: ");
    scanf("%d",&q);

    int b[p][q];

    printf("Enter the elements of second matrix:\n");

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    int res[r][q];

    if(c!=p)
    {
        printf("Multiplication is not possible");
    }

    else
    {
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;

            for(int k=0;k<c;k++) //Move through row of A matrix and column of B matrix.
            {
                res[i][j]+=a[i][k]*b[k][j];
            }

        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d",res[i][j]);
        }

        printf("\n");
    }
    }

    return 0;
}