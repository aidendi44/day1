#include<stdio.h>

int main()
{
    float x, y, z;
    printf("What is the price of the item?\n");  
    scanf("%f", &x);
    printf("Discount(0-100)?");
    scanf("%f", &y);
    z = x - (x * (y/100));
    printf("Discounted Price: %f\n", z);
    return 0;
}