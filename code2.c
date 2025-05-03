#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str;
    int size = 100;

    str = (char*)malloc(size * sizeof(char));

    fgets(str, size, stdin);

    printf("%s", str);
    printf("%d\n", strlen(str));

    free(str);
    str = NULL;
}