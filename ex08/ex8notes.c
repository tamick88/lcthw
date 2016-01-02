#include <stdio.h>

int main(int argc, char *argv[])
{
	// declaring int i, assigns 0 to it
	int i = 0;
	
	// checks if received one arg (from command line), if so runs code
	if (argc == 1){
		// prints insult for only having one arg received
		printf("You only have one argument. You suck.\n");
	// checks if received 2 to 3 args (from command line), if so runs code
	} else if (argc > 1 && argc < 4) {
		// prints statement to give user context of what's happening
		printf("Here's your arguments:\n");
		
		// loops through each received arg (from command line)
		for (i = 0; i< argc; i++) {
			// prints the arg received (from command line)
			printf("%s ", argv[i]);
		}
		// adds formatting
		printf("\n");
	// this only runs if the previous tests fail (if there are more than 3 args 
	// received from the command line)
	} else {
		// prints insult for having received too many args
		printf("You have too many arguments. You suck.\n");
	}
	
	return 0;
}
