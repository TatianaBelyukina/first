#include <stdio.h>
#define N 50
#define TRUE 1
#define FALSE 0




int main()
{
    char str[N];
    fgets(str, N, stdin);
    int length = strlen(str);
    int temp, i, j;
    int s = TRUE;

    for(i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);

    for(i = 0 ; i < (length/2) ; i++)
    {
        if(str[i] =! str[length - i - 1])
        {
             s = FALSE;
        }


    }


    if(s = TRUE)
    {
       printf("symmetrical");
    }
    else
    {
       printf("not symmetrical");
    }

    return 0;
}
