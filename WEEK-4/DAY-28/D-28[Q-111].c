// program to ticket booking system

#include<stdio.h>

struct Ticket
{
    int ticketId;
    char name[50];
    char destination[50];
    int seats;
};

void bookTicket(struct Ticket tickets[], int count)
{
    printf("Enter Ticket Details:\n");

    printf("Ticket ID: ");
    scanf("%d", &tickets[count].ticketId);

    printf("Passenger Name: ");
    scanf("%s", tickets[count].name);

    printf("Destination: ");
    scanf("%s", tickets[count].destination);

    printf("Number of Seats: ");
    scanf("%d", &tickets[count].seats);

    printf("Ticket Booked Successfully!\n");
}

void displayTickets(struct Ticket tickets[], int count)
{
    if(count == 0)
    {
        printf("No bookings found!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("Ticket ID: %d\n", tickets[i].ticketId);
        printf("Passenger Name: %s\n", tickets[i].name);
        printf("Destination: %s\n", tickets[i].destination);
        printf("Seats Booked: %d\n", tickets[i].seats);
        printf("--------------------------\n");
    }
}

void searchTicket(struct Ticket tickets[], int count)
{
    if(count == 0)
    {
        printf("No bookings found!\n");
        return;
    }

    int id;
    int found = 0;

    printf("Enter Ticket ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(tickets[i].ticketId == id)
        {
            printf("Passenger Name: %s\n", tickets[i].name);
            printf("Destination: %s\n", tickets[i].destination);
            printf("Seats Booked: %d\n", tickets[i].seats);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Ticket not found!\n");
}

int cancelTicket(struct Ticket tickets[], int count)
{
    if(count == 0)
    {
        printf("No bookings found!\n");
        return count;
    }

    int id;
    int found = 0;

    printf("Enter Ticket ID to Cancel: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(tickets[i].ticketId == id)
        {
            found = 1;

            for(int j = i; j < count - 1; j++)
            {
                tickets[j] = tickets[j + 1];
            }

            count--;

            printf("Ticket Cancelled Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Ticket not found!\n");

    return count;
}

int main()
{
    struct Ticket tickets[100];
    int count = 0;
    int choice = 0;

    while(choice != 5)
    {
        printf("\n------ TICKET BOOKING SYSTEM ------\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 100)
                {
                    bookTicket(tickets, count);
                    count++;
                }
                break;

            case 2:
                displayTickets(tickets, count);
                break;

            case 3:
                searchTicket(tickets, count);
                break;

            case 4:
                count = cancelTicket(tickets, count);
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}