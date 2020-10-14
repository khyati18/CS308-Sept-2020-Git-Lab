#include "veclib.h"

void print(vector vec_a) {
	printf("[");
	for (int i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]");
	printf("\n");
}


void input(vector vec_a) {
	for (int i=0;i<DIM;i++)
		scanf("%f",&vec_a[i]);
}


int main() {
	vector vecA, vecB, vecC, vecD;

	// read vectors A and B
	printf("Enter vector A with dimension %d\n", DIM);
	input(vecA);
	printf("Enter vector B with dimension %d\n", DIM);
	input(vecB);
	
	printf("Vector A : ");
	print(vecA);
	printf("Vector B : ");
	print(vecB);
	
	//Test for norm of vectors
	float norm_of_vectors = norm(vecA , vecB);
	printf("Norm of A and B: %f\n",norm_of_vectors);
	
	// Test for addition of vectors
	add(vecA, vecB, vecD);
	printf("Addition of A and B : ");
	print(vecD);

	// Test for element wise prod
	eleProd(vecA, vecB, vecC);
	printf("Element-wise product of A and B : ");
	print(vecC);

	//Test for Dot product of vectors
	printf("Dot Product of A and B : ");
	printf("%f \n",dotProd(vecA,vecB));

	//Test for angle b/w 2 vectors
	printf("Angle b/w A and B : ");
	printf("%f",angle(vecA,vecB));	
	
} // end main
