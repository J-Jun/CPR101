//
// MANIPULATING V1
//
// Description: Concatenating the second string inputted to the first string.
//

#include "manipulating.h"

void manipulating() {
	printf("*** Start of Concatenating Strings Demo ***\n");

	// Variables:
	char string1[80];
	char string2[80];

	// Setting up an infinite loop until a user decides to quit
	while (TRUE) {

		// Prompting a user for an input (or q to quit)
		printf("Type the 1st string (q - to quit):\n");
		// Receiving an input from the user, then storing it to an array of string1 with a size of 80
		gets(string1);

		// Comparing the inputted string in buffer1 with a character 'q'
		// When the string1 and 'q' are identical, quit the infinite loop
		if (strcmp(string1, "q") == 0) break;

		// Prompting a user for an input 
		printf("Type the 2nd string:\n");
		// Receiving an input from the user, then storing it to an array of string2 with a size of 80
		gets(string2);

		// string2 will be appended to the end of string1
		strcat(string1, string2);
		printf("concatenated string is %s\n", string1);
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");
}