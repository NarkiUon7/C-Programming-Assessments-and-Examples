/* Pointer example 4

Write a C functionthat takes 2 unsigned int * arguments, returns the smaller of the 2 values then zeros it */

#include<stdio.h>

unsigned int hello(unsigned int *var1, unsigned int *var2);


int main()
{
    unsigned int x = 3, y = 65;
    printf("x: %d  y: %d\n", x, y);
    printf("return: %d\n", hello( &x, &y));
    printf("x: %d  y: %d\n", x, y);
    
    return 0;

}
//Zers the smaller of var 1 and var
// Returns what the smaller varisbles was before zeroing

unsigned int hello( unsigned int *var1, unsigned int *var2) {
    unsigned int smaller;
    if (*var1 < *var2) {      //Var1 is smaller than var2
        smaller = *var1;
        *var1 = 0;
    } else {                //Var2 is smaller than var1
        smaller = *var2;
        *var2 = 0;
    }
    
    return smaller;
}
//THis example works
