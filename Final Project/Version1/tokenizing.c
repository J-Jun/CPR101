//
// TOKENIZING V1
//
// Description: Breaking down a sentence into seperate words and outputting one word per line.
//

#include "tokenizing.h"

void tokenizing() {
	printf("*** Start of Tokenizing Words Demo ***\n");

	// Variables:
	char words[200];
	char* word;
	int w_counter;

	// Setting up an infinite loop until a user decides to quit
	while (TRUE) {

		// Prompting a user for an input (or q to quit)
		printf("Type a few words separated by space(q - to quit):\n");
		// Receiving an input from the user, then storing it to an array of words with a size of 200
		gets(words);

		// Comparing the inputted string in words with a character 'q'
		// When the words and 'q' are identical, quit the infinite loop
		if (strcmp(words, "q") == 0) break;

		// When encountering a " " in the array of words, break the strings before the " " into a token and store the toekn into word
		// When the function strtok() find the " ", it changes it to a NULL
		word = strtok(words, " ");
		w_counter = 1;

		// Setting up a loop until every string is tokenized delimited by " "
		while (word) {
			printf("Word #%d is %s\n", w_counter++, word);
			// Return to the location where the " " has been found and continue to tokenize the rest of the string with a delimiter " "
			word = strtok(NULL, " ");
		}
	}
	printf("*** End of Tokenizing Words Demo ***\n\n");
}