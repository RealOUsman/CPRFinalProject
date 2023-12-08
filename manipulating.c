#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating(void)
{
	// Define buffer size and suppress secure warnings
	printf("*** Start if Concatenating Strings Demo ***\n");
	char string1[BUFFER_SIZE];
	char string2[BUFFER_SIZE];
	do {
		// Get user input for the first string, 'q' to quit
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';
		if ((strcmp(string1, "q") != 0)) {
			// If user didn't input 'q', get the second string
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';
			// Concatenate the second string to the first string
			strcat(string1, string2);
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);
	// End of the concatenating strings demo
	printf("*** End of Comcatenating Strings Demo ***\n\n");
}