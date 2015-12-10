#include <stdio.h>

int main(int argc, char *argv[])
{
	// declaring an int variable i, assigns 0 to it
	int i = 0;
	// uses the int variable i as a counter for a while loop
	while (i < 25) {
		// prints out the current number stored in the variable i
		printf("%d", i);
		// increments i by one. (means the same thing as "i = i + 1")
		i++;
	}
	
	return 0;
}
