//
// CONVERTING V1
//
// Description: Converting a numerical string to an integer.
//

#include "converting.h"

void converting() {

	printf("*** Start of Converting Strings to into Demo ***\n");

	// Variables:
	char int_string[80];
	int int_number;

	// Setting up an infinite loop until a user decides to quit
	while (TRUE) {

		// Prompting a user for an input (or q to quit)
		printf("Type the int numeric string (q - to quit):\n");
		// Receiving an input from the user, then storing it to an array of int_string with a size of 80
		gets(int_string);

		// Comparing the inputted string in int_string with a character 'q'
		// When the int_string and 'q' are identical, quit the infinite loop
		if (strcmp(int_string, "q") == 0) break; 

		// Converting the point of int_string's string to an integer and allocating it to int_number
		int_number = atoi(int_string);
		// Displaying the int_number
		printf("Converted number is %d\n", int_number);
	}
	printf("*** End of Converting Strings to into Demo ***\n\n");
}