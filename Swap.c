/* Pointer Example 2

Write a C function which accepts tweo aruments int * and swaps them */

#include<stdio.h>

void swap(int *a, int *b);


int main()
{
    int a = 100, b = 234;
    printf("a: %d  b: %d\n", a,b);
    swap(&a, &b);
    printf("a: %d  b: %d\n", a,b);
    
    return 0;

}

void swap(int *x, int *y) {
    int tmp;
    
    tmp = *x;
    *x = *y;
    *y = tmp;
}

//THis example works