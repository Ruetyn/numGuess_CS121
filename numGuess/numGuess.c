/* Main Idea of the code
 * Create a pointer to contain name
 * Create an int for the number that needs to be guessed using random
 * Create an int for number of tries
 * Create a variable to control the loop
 * Ask user for their name
 * Create a loop that asks the user to put in a number
 * Give feedback on the guess -- lower/higher
 * Increment number of tries each time through
 * Make the loop stop when they get it
 * Create meta feedback based on number of tries
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1
#define FALSE 0

int main() {
	char name[20];
	srand(time(NULL));
        int correct = (rand() % 100) + 1;
        int tries = 0;
	int guess;
	int keepGoing = TRUE;

	printf("Please enter your name: ");
	scanf("%s", name);
	printf("Nice to meet you %s.  Let's play a game.", name);

        while(keepGoing) {
 		tries++;
		printf("Please guess a number: ");
		scanf("%d", &guess);

		if(correct<guess) {
			printf("Too high \n");
		} else if(correct>guess) {
			printf("Too low \n");
		} else {
			keepGoing = FALSE;
		} // end if
        } // end while

	if(tries>7) {
		printf("You got it in %d tries. This is below average... :(", tries);
	} else if(tries<7) {
		printf("You got it in %d tries. This is above average! :)", tries);
	} else {
		printf("You got it in %d tries. This is average.", tries);
	} // end if	
	return 0;
} // end main
