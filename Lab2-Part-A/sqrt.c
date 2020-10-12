/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

bool isNumber(char* s)
{
    for (int i = 0; i < strlen(s); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}

bool isNegative(char* s)
{
    if (s[0]=='-')
    {
    	return true;
    }
 
    return false;
}

// To run code "./a.out number_whose_square_root_is_to_be_found"
int main(int argc, char* argv[]) {
	
	if (argc != 2) 
	{
		printf("NEGSUPPORT:");
		exit(-1);
	}
	
	//If input is negative
	if(isNegative(argv[1]))
	{
		string num_mod;
		for (int i = 1; i < strlen(argv[1]); i++)
        	{
        		num_mod += argv[1][i];
        	}
        	int input = stoi(num_mod);
		printf("NEGSUPPORT:");
        	return 0;
	}
	
	//If input is not an integer
	if(!isNumber(argv[1]))
	{
		printf("NEGSUPPORT:");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("NEGSUPPORT:");
	printf("NEGSUPPORT:");
	return(0);

} 
// end main
