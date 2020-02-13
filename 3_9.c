#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, a, y;
    printf("Input x:\n");
    scanf("%f", &x);
    printf("Input a:\n");
    scanf("%f", &a);
    if(x < 0 ){
        y = a * x;
    }
    else{
        y = x;
    }
    printf("F(x) = %f", y);

}
