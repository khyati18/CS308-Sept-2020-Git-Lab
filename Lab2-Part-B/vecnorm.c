#include "veclib.h"
#include<math.h>
// Adding two given vectors
float norm(vector vec_a,vector vec_b){
	
	float norm_of_vectors = 0.0;

    for (int i=0;i<DIM;i++) {
        norm_of_vectors = norm_of_vectors + ( vec_a[i] - vec_b[i])*( vec_a[i] - vec_b[i]);
    }
    return sqrt(norm_of_vectors);

}
