#include <stdio.h>

int main ()
{
FILE *f1=fopen("file.txt","r");
FILE *f2= fopen("file2.txt","w");
char cc[256];

while (!feof(f1))
{
fgets(cc,sizeof(cc),f1);
strlwr(cc);
fputs(cc,f2);
}
fclose(f1);
fclose(f2);
}
