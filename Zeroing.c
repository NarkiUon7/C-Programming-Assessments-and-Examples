/* Funtion to pointer example 1: Zeroing

Write a  C function which takes a single int * argument and zeros it */

#include<stdio.h>

void ZeroInt(int * x);



int main()
{
    int test = 100;
    printf("Test equals: %d\n", test);
    ZeroInt(&test);
    printf("Test equals: %d\n", test);
    
    return 0;

}

void ZeroInt(int * x) {
    *x = 0;
}



//THis example works