/* Example of finding somthing from a 2D Array */

#include<stdio.h>


int main(){
    float myarray[3][3] = {{0.1, 0.2, 0.3}, {1.1, 1.2, 1.3}, {2.1, 2.2, 2.3}};
    float sum;
    float mean;
    
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            sum = sum + myarray[x][y];
        }
    }
    
    mean = (sum)/(9.0);
    printf("mean equals: %f\n", mean);
    
    return 0;
}

//This example works