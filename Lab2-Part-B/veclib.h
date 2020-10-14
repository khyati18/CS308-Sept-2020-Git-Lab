#include <stdio.h>

#define DIM 4
// vector type
typedef float vector[DIM];

// functions

void input(vector vec_a);
// print vector
void print(vector vec_a);
// vector addition
void add(vector vec_a, vector vec_b, vector vec_c);
// elementwise product
void eleProd(vector vec_a, vector vec_b, vector vec_c);
// difference of two vectors
void diff(vector vec_a, vector vec_b, vector vec_c);
// dot product
float dotProd(vector vec_a, vector vec_b);
//Norm of two vectors
float norm(vector vec_a,vector vec_b);
