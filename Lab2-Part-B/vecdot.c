#include "veclib.h"

// Dot Product
float dotProd(vector vec_a,vector vec_b){

	float result=0;
    
	for (int i=0;i<DIM;i++) {
	result += vec_a[i] * vec_b[i];
	}

	return result;

}

