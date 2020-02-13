#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    printf("Type int - %lu bytes \n", sizeof(int));
    printf("Type long int - %lu bytes \n", sizeof(long int));

    #ifdef LLONG_MAX
        printf("Type long long int - %lu bytes \n", sizeof(long long int));
    #endif

    return 0;
}

