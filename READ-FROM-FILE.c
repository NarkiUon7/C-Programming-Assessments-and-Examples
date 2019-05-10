/* Hello World program */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main () {
    
    FILE *input;
    
    int a, b, c;
    
    input = fopen("Array", "r");
    
    fscanf(input, "%d %d %d\n", &a, &b, &c);
    
    printf( "%d %d %d\n", a, b, c);
    
    fclose(input);
    
    
    return 0;
    
    
}

