#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(NULL));
    randomNumber = (rand() % 100) + 1; // Random number between 1 and 100

    printf("🎯 Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100.\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        }
        else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("\n🎉 Congratulations! You guessed it correctly.\n");
            printf("You took %d attempts.\n", attempts);
        }

    } while (guess != randomNumber);

    return 0;
}
