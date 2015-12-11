#include <stdio.h>

int main(int argc, char *argv[])
{
	// Exits program with an error if there is more than one additional arg
	// entered on the command line
	if (argc != 2) {
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}
	
	// declares int variable i, assigns 0 to it
	int i = 0;
	
	/* argv[1][i] :"argv[1]" refers to the first arg entered on the command line,
	 * the [i] refers to the index number of the character in the string argv[1]
	 * so this loops runs through every character in the arg entered on the 
	 * command line (remember a string is just an array of characters)
	 */
	for (i = 0; argv[1][i] != '\0'; i++) {
		// declares char variable letter, assigns the character in argv currently
		// being processed.
		char letter = argv[1][i];
		
		switch (letter) {
			// checks for a lower- or uppercase 'a'
			case 'a':
			case 'A':
				// prints out current index number and the letter 'A'
				printf("%d: 'A'\n", i);
				break;
				
			// checks for a lower- or uppercase 'e'
			case 'e':
			case 'E':
				// prints out current index number and the letter 'E'
				printf("%d: 'E'\n", i);
				break;
				
			// checks for a lower- or uppercase 'i'
			case 'i':
			case 'I':
				// prints out current index number and the letter 'I'
				printf("%d: 'I'\n", i);
				break;
				
			// checks for a lower- or uppercase 'o'
			case 'o':
			case 'O':
				// prints out current index number and the letter 'O'
				printf("%d: 'O'\n", i);
				break;
				
			// checks for a lower- or uppercase 'u'
			case 'u':
			case 'U':
				// prints out current index number and the letter 'U'
				printf("%d: 'U'\n", i);
				break;
				
			// checks for a lower- or uppercase 'y'
			case 'y':
			case 'Y':
				if (i > 2) {
					// it's only sometimes Y
					// prints out current index number and the letter 'Y'
					printf("%d: 'Y'\n", i);
				}
				break;
			
			default:
				// if all previous tests fail, it's a consonant
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	
	return 0;
}
