#include <stdio.h>

void Revers(F1, F2)
{
    while (!feof(F1))
    {
        int N, i;
        char sl[80];
        fgets(sl, 80, F1);
        N = strlen(sl);

        i = N;
        for (i = N - 1; i > 0; i--)
            if (sl[i] != '\n')
                fprintf(F2, "%c", sl[i]);

        fprintf(F2, "%c", sl[0]);
        fprintf(F2, "%c", '\n');
    }
}
int main()
{
    FILE *F1, *F2;
    if ((fopen_s(&F1, "file.txt", "r")) != 0)
    {
        printf("Невозможно открыть файл.\n");
        return 0;
    }
    if ((fopen_s(&F2, "file2.txt", "w+")) != 0){
        printf("Невозможно открыть файл.\n");
        return 0;
    }
    Revers(F1,F2);
}
