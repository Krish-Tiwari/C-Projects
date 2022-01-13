#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;
    do
    {
        printf("Please enter your guess:\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Retry with a greater number :)\n");
        }
        else if (guess == number)
        {
            printf("You guessed the number in %d guesses\n", nguesses);
        }
        else if (guess > number)
        {
            printf("Retry with a smaller number :)\n");
        }
        nguesses++;    
    } while (guess != number);    
    return 0;
}