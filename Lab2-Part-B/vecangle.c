#include "veclib.h"
#include <math.h>

float angle(vector vec_a,vector vec_b){
    float PI = 3.1415;
    float result=0.0;
    float len_a=0.0;
    float len_b=0.0; 
    
    for (int i=0;i<DIM;i++){
        len_a = len_a + (vec_a[i]*vec_a[i]);
        len_b = len_b + (vec_b[i]*vec_b[i]);
    }

    float dot=dotProd(vec_a,vec_b);
    float temp = acosf(dot/(sqrt(len_a)*sqrt(len_b)));
    return temp*180/PI;
}


//veclib
// float angle(vector vec_a,vector vec_b);

//vecmain
//Test for angle b/w 2 vectors
//printf("Angle b/w A and B : ");
//printf("%f",angle(vecA,vecB));