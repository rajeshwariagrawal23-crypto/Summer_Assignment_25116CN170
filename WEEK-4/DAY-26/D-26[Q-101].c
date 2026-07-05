// program to create a number guessing game 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num, guess, attempt=0;

    // obtaining a random number from the server to guess
    srand(time(0));
    num = rand() % 100 + 1;

    //asking the user to guess the number 
    printf("Guess the number between 1 to 100.\n");

    // checking if the guessed number is as same as the number given by bot
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempt++;

        if(guess > num)
        {
            printf("Your guess is too high.\n");
        }
        else if(guess < num)
        {
            printf("Your guess is too low.\n");
        }
        else
        {
            printf("Congratulations ! you've guessed the corred number in %d attempts", attempt );
        }
    } while (guess != num);
    
}