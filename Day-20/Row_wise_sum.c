// Write a program to Find row-wise sum.
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
    
    for(int i=0;i<r;i++)
    {
        sum=0;
        for(int j=0;j<c;j++)
        {
          sum+=a[i][j];
        }

    printf("Sum of elements of %d row is:%d\n",i+1,sum);
        
    }

    return 0;
}
