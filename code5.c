#include <stdio.h>
#include <stdlib.h>

void * custom_calloc(size_t num, size_t size){
    size_t total_size = num * size;
    if(num != 0 && total_size / num != size){
        return NULL;
    }
    void *tmp = malloc(total_size);
        if(!tmp){
            return NULL;
        }
        memset(tmp, 0, total_size);
        return tmp;
}
