#include <stdio.h>
#define N 10
#include <stdlib.h>

void ReadVector(int a[]){
    int i;
 // �������� ����� i �������������
 // � ����� ������� ������ ��� �����������
 // ���������� ��� �������� ������.
    for (i = 0; i <= N - 1; i++)
     scanf("%d", &a[i]);
}


int main(){
    int count=0, q;
    int a[N];
 // ������� �������� � ��������� � ����� a.
    ReadVector(a);

    for(q = 0; q <= N - 1; q++){
        if((a[q]>>5)&1 == 1 && (a[q]>>6)&1 == 1 && (a[q]>>8)&1 == 1){
            count++;
        }
    }
    printf("The number of suitable: %d", count);
}
