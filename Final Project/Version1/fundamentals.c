//
// FUNDAMENTALS V1
//
// Description: Finding a character at a certain index of a string and output the character.
//

#include "fundamentals.h"

void fundamentals() {

	printf("*** Start of Indexing Strings Demo ***\n");

	// Variables:
	char buffer1[80];
	char num_input[10];

	// Represents the size of any object in bytes and returned by sizeof operator
	size_t position;

	// Setting up an infinite loop until a user decides to quit
	while (TRUE) {

		// Prompting a user for an input (or q to quit)
		printf("Type a string (q - to quit):\n");
		// Receiving an input from the user, then storing it to an array of buffer1 with a size of 80
		gets(buffer1);

		// Comparing the inputted string in buffer1 with a character 'q'
		// When the buffer1 and 'q' are identical, quit the infinite loop
		if (strcmp(buffer1, "q") == 0) break; 

		// Setting up another infinite loop until the user inputs a correct input
		while (TRUE) {

			// Prompting a user for an input 
			printf("Type the character position within the string:\n");
			// Receiving an input from the user, then storing it to an array of num_input with a size of 10
			gets(num_input);

			// converting a pointer of num_input's string to an integer and allocating it to position
			position = atoi(num_input);

			// Comparing if the value of position is bigger or equal to the length of the value in buffer1
			if (position >= strlen(buffer1)) {

				// Display error message if the comparison is true
				printf("Wrong position... type again, please\n");
				continue;
			}

			// %u is a format specifier for unsigned int data type
			printf("The character found at %u position is \'%c\'\n", position, buffer1[position]);
			break;
		}
	}
	printf("*** End of Indexing Strings Demo ***\n\n");
}