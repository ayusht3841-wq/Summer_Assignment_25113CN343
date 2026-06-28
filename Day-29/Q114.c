// Write a program to create menu-driven array operations system.
#include<stdio.h>
#include<limits.h>
int main()
{
    int choice=0;

    int entered=0;

    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];

    while(choice!=8)
    {
        printf("\n===== MENU DRIVEN ARRAY OPERATION =====\n");
        printf("1. Enter Array\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Calculate Sum\n");
        printf("6. Calculate Average\n");
        printf("7. Search an Element\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("Enter array elements: ");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }

            entered=1;
        }

        else if(choice>=2 && choice<=7 && entered==0)
        {
            printf("Please enter the array first.\n");
        }

        else if(choice==2)
        {
            printf("Array is:\n");
            for(int i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
        }

        else if(choice==3)
        {
            int max=INT_MIN;
            for(int i=0;i<n;i++)
            {
                if(max<a[i])
                {
                    max=a[i];
                }
            }

            printf("Maximum element is:%d",max);
        }

        else if(choice==4)
        {
            int min=INT_MAX;
            for(int i=0;i<n;i++)
            {
                if(min>a[i])
                {
                    min=a[i];
                }
            }

            printf("Minimum Element:%d",min);
        }

        else if(choice==5)
        {
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum=sum+a[i];
            }

            printf("Sum is:%d",sum);
        }

        else if(choice==6)
        {
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum=sum+a[i];
            }
            float avg=(float)sum/n;
            
            printf("Average is: %.2f",avg);
        }

        else if(choice==7)
        {
            int key,flag=0;
            printf("Enter the Element to search: ");
            scanf("%d",&key);
            for(int i=0;i<n;i++)
            {
                if(a[i]==key)
                {
                    printf("Element found at Position: %d",i+1);
                    flag=1;
                    break;
                }
            }
            
            if(flag==0)
            {
                printf("Element not found");
            }
        }

        else if(choice == 8)
        {
            printf("Thank you for using the Array operation system!\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    }

    return 0;
}