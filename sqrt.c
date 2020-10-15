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

	int input = atoi(argv[1]);
	
	if(input<0){
		printf("NEGSUPPORT: Input not valid");
		return (0);
	}
	printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));

	printf("NEGSUPPORT: End of program. Exiting.");

	return (0);

} // end main
