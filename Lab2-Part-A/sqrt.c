/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstring>

bool isNumber(char* s)
{
    for (int i = 0; i < strlen(s); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}

// To run code "./a.out number_whose_square_root_is_to_be_found"
int main(int argc, char* argv[]) {
	
	if (argc != 2) 
	{
		printf("Usage: ./a.out sqrt_input\n");
		exit(-1);
	}
	
	//If input is not an integer
	if(!isNumber(argv[1]))
	{
		printf("Input should be an integer\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} 
// end main
