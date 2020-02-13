#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, h, r;
    printf("Input x:\n");
    scanf("%f", &x);
    printf("Input y:\n");
    scanf("%f", &y);
    printf("Input z:\n");
    scanf("%f", &z);
    printf("Input h:\n");
    scanf("%f", &h);
    printf("Input r:\n");
    scanf("%f", &r);
    if(fabsf(x) <= r && fabsf(y) <= r && z <= h && z >= 0 ){
        printf("The point belongs to the cylinder");
    }
    else{
        printf("The point doesn't belongs to the cylinder");
    }
}
