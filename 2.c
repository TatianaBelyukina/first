#include <stdio.h>
#include <math.h>

float Function(float x){
float y;
y = x/(1 + fabsf(x));
return y;
}
int main(){
printf("Input x:\n");
float x;
scanf("%f",&x);
printf("%f\n", Function(x));
}
