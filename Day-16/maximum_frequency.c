//Write a program to find maximum frequency element.
#include<stdio.h>
int main()
{
    int n,count;

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int maxfreq=0;
    int maxelement;


    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        if(maxfreq<count)
    {
        maxfreq=count;
        maxelement=a[i];
    }

    }

    printf("Element with maximum frequency= %d\n",maxelement);
    printf("Frequency= %d",maxfreq);


    return 0;
}