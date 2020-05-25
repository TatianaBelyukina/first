#include <stdio.h>
int main()
{
    FILE *F1;
    int  n = 0;
    char sl[1000];
    if ((fopen_s(&F1, "file.txt", "r")) != 0)
    {
        printf("Невозможно открыть файл.\n");
        return 0;
    }

 while (!feof(F1))
    {
        int N;
        fgets(sl, 1000, F1);
        N = strlen(sl);
        printf("%d\n", N);
        if (N == 0)
            n++;

    }
    printf("%d", n);
}
