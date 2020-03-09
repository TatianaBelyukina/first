#include  <stdio.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str[101] = "";
    char res[101] = "";

    printf("Input:");
    fgets (str, 101, stdin);


    int j = 0;
    int i;
    for (i = 0; i<strlen(str) ; i++) {
        if (str[i] == '+')
        {
          if (j==0) continue;
          if (str[i+1] == '0'|| str[i+1] == '1'|| str[i+1] == '2'|| str[i+1] == '3'|| str[i+1] == '4'|| str[i+1] == '5'|| str[i+1] == '6'|| str[i+1] == '7'|| str[i+1] == '8'||str[i+1] == '9') continue;
        }
        res[j] = str[i];
        j++;
    }
    i=strlen(res);
    if(res[i-2] == '+')
        res[i-2] = '\0';

    printf("\nResult:%s", res);
    getchar();
}
