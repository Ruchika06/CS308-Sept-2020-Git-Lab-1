/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//New comment added before the main function

//Second New comment added before the main function

//Changes made to file and commits added regarding basic-workflow

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	char* userInputStr;
	userInputStr = argv[1];
    	for ( int x = 0;userInputStr[x]!='\0' ; x++)
    	{
		if (isalpha(userInputStr[x]))
		{

		    printf("DEBUG: Invalid input given by user \n");

		  exit(-1); 
		}

    	}
	int input = atoi(argv[1]);
	
	if(input<0){
		printf("NEGSUPPORT: Input not valid");
		return (0);
	}
	printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(abs(input)));

	printf("DEBUG: End of program. Exiting.");

	return (0);

} // end main
