#define _CRT_SECURE_NO_WWARNING
#define BUFFER_SIZE 80
#include "converting.h"

void converting()
{
    /* Version 1 */
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Create variables required by function, one char array for user input,
    // and one int for storing the value after conversion
    char intString[BUFFER_SIZE];
    int intNumber;

    // Conversion loop, stops when user enters "q"
    do
    {
        // Get and clean user input
        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);

        // Replace \n with string terminator (clean input)
        intString[strlen(intString) - 1] = '\0';

        // If string was not q, convert and display converted value to user
        if (strcmp(intString, "q") != 0)
        {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }

    } while (strcmp(intString, "q") != 0);

    printf("*** End of Converting Strings to int Demo ***\n\n");

    /* Version 2 */
    printf("*** Start of Converting Strings to double Demo ***\n");

    // Again, same as above, creating variables to use in function
    // char array for user input, and double for storing the value after conversion
    char doubleString[BUFFER_SIZE];
    double doubleNumber;

    // Conversion loop, stops when user enters "q"
    do
    {
        // Get and clean user input
        printf("Type an double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);

        // Replace \n with string terminator (clean input)
        doubleString[strlen(doubleString) - 1] = '\0';

        // If string was not q, convert and display converted value to user
        if (strcmp(doubleString, "q") != 0)
        {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }

    } while (strcmp(doubleString, "q") != 0);

    printf("*** End of Converting Strings to double Demo ***\n");

    /* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");

    // Yet again, creating variables to use in function
    // char array for user input, and long for storing the value after conversion
    char longString[BUFFER_SIZE];
    double longNumber;

    // Conversion loop, stops when user enters "q"
    do
    {
        // Get and clean user input
        printf("Type an double numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);

        // Replace \n with string terminator (clean input)
        longString[strlen(longString) - 1] = '\0';

        // If string was not q, convert and display converted value to user
        if (strcmp(longString, "q") != 0)
        {
            longNumber = atof(longString);
            printf("Converted number is %f\n", longNumber);
        }

    } while (strcmp(longString, "q") != 0);

    printf("*** End of Converting Strings to long Demo ***\n");
}
