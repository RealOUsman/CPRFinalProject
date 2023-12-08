// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS  
#define BUFFER_SIZE 80            
#define NUM_INPUT_SIZE 10         
#include "fundamentals.h"       // Include the fundamentals header file

// Function to demonstrate how to index characters in a string
void fundamentals(void) {
    // Print introduction message for the demo
    printf("*** Start of Indexing Strings Demo ***\n");

    // Define buffers to hold user input
    char buffer1[BUFFER_SIZE];  // Buffer for string input
    char numInput[NUM_INPUT_SIZE];  // Buffer for position input
    size_t position;  // Variable to store the character position

    // Loop to process user input until 'q' is entered
    do {
        // Prompt user for a string and read it into buffer1
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0';  // Remove trailing newline character

        // If the user does not want to quit, ask for a character position
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';  // Remove trailing newline character
            position = atoi(numInput);  // Convert position input to an integer

            // Adjust position if it's beyond the string length
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;  // Set to last valid index
                printf("Too big... Position reduced to max. available\n");
            }

            // Output the character at the given position
            printf("The character found at %d position is '%c'\n",
                (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);  // Continue until 'q' is entered

    // Print closing message for the demo
    printf("*** End of Indexing Strings Demo ***\n\n");
}
