// Write a program to Find column-wise sum.
#include<stdio.h>
int main()
{
    int r;

    printf("Enter the number of rows: ");
    scanf("%d",&r);

    int c;

    printf("Enter the number of columns: ");
    scanf("%d",&c);

    int a[r][c],sum;

    printf("Enter the elements of matrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int j;
    
    for(int i=0;i<c;i++)
    {
        sum=0;
        for(j=0;j<r;j++)
        {
            sum+=a[j][i];
        }

        printf("Sum of elements of column %d is: %d\n",i+1,sum);
    }

    return 0;
}
