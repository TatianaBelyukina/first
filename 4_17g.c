#include <stdio.h>
#include <math.h>


void main(){
    const float eps = 0.000001;
    float y, x, a;
    int k;
    printf("Input x:\n");
    scanf("%f",&x);
    y = a = 1;
    k = 0;
    while (fabs(a) >= eps){
        k = k + 1;
        a = (a * x) / k;
        y = y + a;
 }
 printf("%f", y);
}
