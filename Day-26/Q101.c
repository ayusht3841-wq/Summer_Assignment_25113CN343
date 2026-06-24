// Write a program to create number guessing game.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess;
    int attempts = 0;

    srand(time(NULL)); //Creates random numbers different each run.

    int secret = rand() % 100 + 1; //Restricts the huge random number to 1-100.

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 100\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess < secret)
        {
            printf("Too Low!\n");
        }

        else if(guess > secret)
        {
            printf("Too High!\n");
        }

        else
        {
            printf("Correct! You guessed the number.\n");
            printf("Number of attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}