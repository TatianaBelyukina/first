#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
  char s[80];
  int count,i,mx,imx;
  printf("������� ������ : ");
  gets(s);
  count = 0;
  for (i = 0, mx=1, count=1; s[i] != '\0'; i++)
  {
    if (s[i]>='0'&&s[i]<='9')
      count++;
    else {
     if (count > mx) mx = count;
     count = 1;
  }
  }
  printf("� ������\n");
  puts(s);      // ����� ������
  printf("����� ������� ��������������������� �����: ");
  printf("  %d", mx-1);
  getchar(); getchar();
  return 0;
}
