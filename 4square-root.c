#include<stdio.h>
#include<math.h>

int main()
{
    
    float x , y, z;
    printf("Input your number:\n");  
    scanf("%f", &x);
    y = sqrt (x);
    z = log10 (x);
    printf("Answer:%.2f %.2f", y, z);
    return 0;

}