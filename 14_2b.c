#include <stdio.h>
int main()
{
    FILE *F1;
    int  n = 0;
    char sl[1000];
    if ((fopen_s(&F1, "file.txt", "r")) != 0)
    {
        printf("���������� ������� ����.\n");
        return 0;
    }

 while (!feof(F1))
    {
        int N;
        fgets(sl, 1000, F1);
        N = strlen(sl);
        if(N>=60)
          printf("%s\n", sl);

    }

}
