//  Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, num_guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; //  Generates a random number between 1 to 100
    // printf("The number is %d\n", number);
    //  Keep running the loop untill the number is guessed9
    do
    {
        printf("Guess the number between 1 to 100: \n");
        scanf("%d", &guess);
        if (guess<number)
        {
            printf("Enter higher number please!\n");
        }
        else if (guess>number)
        {
            printf("Enter lower number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", num_guesses);
        }
        num_guesses++;
    } while(guess!=number);

    return 0;
}