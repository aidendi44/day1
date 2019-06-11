#include<stdio.h>

int main()
{
    float x, y, z;
    printf("How long is the base?\n");  
    scanf("%f", &x);
    printf("How long is the height?\n");
    scanf("%f", &y);
    z = x * y * 0.5;
    printf("Area of the right triangle: %f\n", z);
    return 0;
}