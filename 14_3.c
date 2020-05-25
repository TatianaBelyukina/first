#include <stdio.h>
#include <malloc.h>
static char* readfile(const char* filename);
static char* find_maxp(char* s);


int main(void){
    char* ptr;
    char* buf = readfile("file.txt");
    if(buf == NULL)
        return 1;

    //найти макс-строку
    if((ptr = find_maxp(buf)) != NULL)
        puts(ptr);
    free(buf);
    getchar();
    return 0;
}


//чтение файла
static char* readfile(const char* filename){
    long   len;
    char*  buf;
    size_t num, cnt;
    FILE*  fp = fopen(filename, "rb");
    if(fp == NULL)
        return NULL;

    fseek(fp, 0L, SEEK_END);
    len = ftell(fp);
    if(len <= 0L){
        fclose(fp);
        return NULL;
    }

    cnt = (size_t)len;
    buf = (char*)malloc(cnt + sizeof(char));
    if(buf == NULL){
        fclose(fp);
        return NULL;
    }

    fseek(fp, 0L, SEEK_SET);
    num = fread(buf, sizeof(char), cnt, fp);
    if((num != cnt) || (ferror(fp) != 0)){
        fclose(fp);
        free(buf);
        return NULL;
    }
    buf[num] = '\0';
    return buf;
}

//макс-строка
static char* find_maxp(char* s){
    size_t n = 0, m = 0;
    char*  p = NULL;
    do {
        if(!*s || (*s == '\r') || (*s == '\n')){
            if(n > m){
                m = n;
                p = s - n;
            }
            n = 0;
        } else
            ++n;
    } while(*s++ != '\0');

    if(p != NULL)
        *(p + m) = '\0';
    return p;
}
