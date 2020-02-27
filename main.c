#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); //scans number to float point x
    y = x*x + 2*x;
    printf("y: %f\n", y); //prints the value stored as y and starts new line
    return 0;
}
