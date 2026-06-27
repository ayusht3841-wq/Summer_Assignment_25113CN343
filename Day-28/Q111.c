// Write a program to Create ticket booking system.
#include<stdio.h>

struct TICKET
{
    char Passenger_Name[50];
    int Ticket_ID;
    int Seat_Number;       
    int Ticket_price;
    char Booking_Status[50];
};

int main()
{
    int n;

    printf("Enter Number of Tickets:");
    scanf("%d",&n);

    struct TICKET T[n];
    

    for(int i=0;i<n;i++)
    {
        printf("\nTicket %d\n",i+1);

        printf("Enter Passenger Name: ");
        scanf(" %[^\n]",T[i].Passenger_Name);

        printf("Enter Ticket ID: ");
        scanf("%d",&T[i].Ticket_ID);

        printf("Enter Seat number: ");
        scanf("%d",&T[i].Seat_Number);

        printf("Enter Ticket Price: ");
        scanf("%d",&T[i].Ticket_price);

        printf("Enter Booking status: ");
        scanf(" %[^\n]",T[i].Booking_Status);
    }

    printf("\n=====TICKET RECORD=====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nPassenger Name: %s",T[i].Passenger_Name);
        printf("\nTicket Id: %d",T[i].Ticket_ID);
        printf("\nSeat Number: %d",T[i].Seat_Number);
        printf("\nTicket Price: %d",T[i].Ticket_price);
        printf("\nBooking Status: %s",T[i].Booking_Status);
    }

    int searchId;
    int found=0;

    printf("\nEnter Ticket Id to be searched: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(T[i].Ticket_ID==searchId)
        {
            printf("\nTicket found!\n");
            printf("\nPassenger Name: %s",T[i].Passenger_Name);
            printf("\nSeat Number: %d",T[i].Seat_Number);
            printf("\nTicket Price: %d",T[i].Ticket_price);
            printf("\nBooking Status: %s",T[i].Booking_Status);
            
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Ticket not found.\n");
    }

    return 0;
}
