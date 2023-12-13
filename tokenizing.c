#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 300  // define variable BUFFER_SIZEN as 300
#include "tokenizing.h" //include header file tokenizing.h

//V1 - start defining function tokenizing
void tokenizing(void)
{
	printf("*** Start of Tokenizing Words Demo ***\n");
	char   words[BUFFER_SIZE]; //declare array char variable words with size BUFFER_SIZE variable
	char* nextWord = NULL;     //declare poiner variable nextWord with value=NULL
	int   wordsCounter;        //declare variable wordsCounter

	//Initiating a 'do while' loop that continues its iterations until the specified condition is satisfied.
	do
	{
		printf("Type a few words separated by space (q to quit):\n");

		fgets(words, BUFFER_SIZE, stdin);  
		words[strlen(words) - 1] = '\0';  
		if (strcmp(words, "q") != 0)
		{
			nextWord = strtok(words, " ");
			wordsCounter = 1;        
			while (nextWord)
			{
				printf("Word is #%d is \'%s\'\n", wordsCounter++, nextWord);  
				nextWord = strtok(NULL, " ");   //value is stored in nextWord
			}
		}
	} while (strcmp(words, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");

	//V2
	//starting of version 2 of tokenizing demo
	printf("*** Initiating Tokenizing Phrases Demonstration ***\n"); // Declare a character array variable named "phrases" with the size BUFFER-SIZE
	char phrases[BUFFER_SIZE]; // Create a pointer variable "nextPhrase" initialized to NULL
	char* nextPhrase = NULL; // Initialize the "phrasesCounter" variable to NULL
	int phrasesCounter = NULL;
	do
	{
		printf("Enter several phrases separated by commas (type 'q' to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin); // Replace the trailing newline character with a null terminator
		phrases[strlen(phrases) - 1] = '\0'; // Check if the entered phrases are not equal to 'q'
		if ((strcmp(phrases, "q") != 0))
		{
			nextPhrase = strtok(phrases, ",");
			while (nextPhrase)
			{
				printf("Phrase #%d: '%s'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	// Conclude the tokenizing phrases demonstration
	printf("*** Tokenizing Phrases Demonstration Concluded ***\n\n");

	//V3
	printf("* Start of Tokenizing Sentences Demo *\n"); //start of tokenizing sentences demo
	char sentences[BUFFER_SIZE]; // variable sentences of char with size[BUFFER_SIZE]
	char* nextSentence = NULL;  //declare pointer variable nextSentence = NULL
	int sentencesCounter;      //declare sentencesCounter variable of type int
	do
	{
		printf("Type a few sentences separated by dot (q to quit):\n");
		fgets(sentences, BUFFER_SIZE, stdin); 	 //take input from file and store in sentences variable
		sentences[strlen(sentences) - 1] = '\0'; //set last value in sentences array to null pointer
		if ((strcmp(sentences, "q") != 0))       //if condition checking if sentences is not equal to 0 or that if sentences=q
		{

			nextSentence = strtok(sentences, "."); //tokenize ',' in sentences
			sentencesCounter = 1;                  //set sentencesCounter=1
			//till nextPhrase id true execute the code block
			while (nextSentence)
			{
				//print sentencesCounter + 1 and nextPhrase
				printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
				// tokeninze ',' in NULL
				nextSentence = strtok(NULL, ".");
			}
		}
	} while (strcmp(sentences, "q") != 0);
	//end of tokenizing phrases demo
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
}