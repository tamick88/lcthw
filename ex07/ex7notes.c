// adding a library called stdio.h
#include <stdio.h>

// declaring the main function
int main(int argc, char *argv[])
{
	// declare int variable distance, assigns 100 to it
	int distance = 100;
	// declare float variable power, assigns 2.345f to it
	float power = 2.345f;
	// declare double variable super_power, assigns 56789.4532 to it
	double super_power = 56789.4532;
	// declare char variable, assigns 'A' to it
	char initial = 'A';
	// declare char array (string) variable first_name, assigns "Zed" to it
	char first_name[] = "Zed";
	// declare char array (string) variable last_name, assigns "Shaw" to it
	char last_name[] = "Shaw";
	
	// print statement, uses int variable distance
	printf("You are %d miles away.\n", distance);
	// print statement, uses float variable power
	printf("You have %f levels of power.\n", power);
	// print statement, uses float variable super_power
	printf("You have %f awesome super powers.\n", super_power);
	// print statement, uses char variable initial
	printf("I have an initial %c.\n", initial);
	// print statement, uses char array (string) variable first_name
	printf("I have a first name %s.\n", first_name);
	// print statement, uses char array (string) variable last_name
	printf("I have a last name %s.\n", last_name);
	/* print statement, uses char array (string) variable first_name, char
	 * variable initial, and char array (string) variable last_name
	 */
	printf("My whole name is %s %c. %s.\n",
		first_name, initial, last_name);
		
	// declare int variable bugs, assigns 100 to it
	int bugs = 100;
	// declare double variable bug_rate, assigns 1.2 to it
	double bug_rate = 1.2;
	
	// print statement, uses int variable bugs and double variable bug_rate
	printf("You have %d bugs at the imaginary rate of %f.\n",
		bugs, bug_rate);
	
	// declare long decimal variable universe_of_defects, assigns the value of
	// 1L * 1024L * 1024L * 1024L to it
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	// print statement, uses long decimal variable universe_of_defects	
	printf("The entire universe has %ld bugs.\n", universe_of_defects);
	
	// declare double variable expected_bugs, assigns bugs * bug_rate to it
	double expected_bugs = bugs * bug_rate;
	// print statement, uses double variable expected_bugs
	printf("You are expected to have %f bugs.\n", expected_bugs);
	
	// declare double variable part_of_universe, assigns expected_bugs /
	// universe_of_defects to it
	double part_of_universe = expected_bugs / universe_of_defects;
	// print statement, uses double variable part_of_universe
	printf("That is only a %e portion of the universe.\n",
		part_of_universe);
		
	// this makes no sense, just a demo of something wierd
	// chars are stored as integers
	char nul_byte = '\0';
	// which is why multipication (and math in general) can be performed with them
	int care_percentage = bugs * nul_byte;
	// print statement, uses double variable care_percentage with value calculated
	// using a "hack"
	printf("Which means you should care %d%%.\n", care_percentage);
	
	return 0;
}
