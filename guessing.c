#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Hi\n");
    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("abe bda soch be\n");
        }
        else if (guessed < randomNumber)
        {
            printf("thoda aaukat me aja sale\n");
        }
        else
        {
            printf("Jeet gya launda!\n");
        }

        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the number in %d attempts\n", no_of_guesses);

    return 0;
}