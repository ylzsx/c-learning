#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *mystrcpy(char *dest, const char *src) {

    char *ret = dest;
    if (dest != NULL && src != NULL)
        while ((*dest++ = *src++) != '\0');

    return ret;
}
    
static char *mystrncpy(char *dest, const char *src, size_t n) {
    
    int i;

    for (i = 0; i < n && (dest[i] = src[i]); i++);

    for (; i < n; i++)
        dest[i] = '\0';

    return dest;
}


int main() {

    char str1[] = "hello word";
    char str2[128] = {"I am bob"};

//    mystrcpy(str2, str1);
//    mystrncpy(str2, str1, 5);

    strncpy(str2, str1, 5);
    str2[5] = '\0';
    puts(str2);

    exit(0);
}
