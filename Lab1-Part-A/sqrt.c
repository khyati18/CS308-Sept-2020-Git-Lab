/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// To run code "./a.out number_whose_square_root_is_to_be_found"
int main(int argc, char* argv[]) {
	
	if (argc != 2) 
	{
		printf("Usage: ./a.out sqrt_input\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} 
// end main
