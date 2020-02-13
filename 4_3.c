#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, n1, nmin, i = 1, i1 = 1;
    printf("Input n:\n");
    scanf("%d",&n);
    nmin = n;
    while(nmin > 0)
    {
        printf("Input n:\n");
        scanf("%d",&n1);
        i+=1;
        if (n1 < nmin && n1 != 0){
            nmin = n1;
            i1 = i;
      }
        else if (n1 == 0){
            break;
        }

   }
    printf("%d\n", nmin);
    printf("%d", i1);
}
