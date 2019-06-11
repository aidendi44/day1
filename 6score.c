#include<stdio.h>


int main()
{
    float x , y, z , a ;
    
    printf("Input your assignment score:\n");  
    scanf("%f", &x);
    printf("Input your midterm score:\n");  
    scanf("%f", &y);
    printf("Input your final score:\n");  
    scanf("%f", &z);
    a = (x*.1) + (y*.4) +(z*.5) ;
    printf("Your overall score:%f\n", a);
    return 0;
}