
#include <stdio.h>
int main()
{
    FILE *F1, *F2;
    char ch, sl[1000], sl2[1000], c;
    if ((fopen_s(&F1, "file.txt", "r")) != 0)
    {
        printf("���������� ������� ����.\n");
        return 0;
    }
    if ((fopen_s(&F2, "file2.txt", "w+")) != 0){
        printf("���������� ������� ����.\n");
        return 0;
    }
 while (!feof(F1))
    {
        int N, i;
        fgets(sl, 1000, F1);
        N = strlen(sl);

        i = N;
        for (i = N - 1; i > 0; i--)
            if (sl[i] != '\n')
                fprintf(F2, "%c", sl[i]);

        fprintf(F2, "%c", sl[0]);
        fprintf(F2, "%c", '\n');
    }
   fclose(F1);
  fclose(F2);
    return 0;
}
