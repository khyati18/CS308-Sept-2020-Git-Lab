#include "veclib.h"

// Adding two given vectors
void add(vector vec_a,vector vec_b,vector vec_c){

    // NULL check
    if(!vec_a || !vec_b || !vec_c)
    return;

    for (int i=0;i<DIM;i++) {
        vec_c[i] = vec_a[i] + vec_b[i];
    }

}
