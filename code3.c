#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    float *arr;
    scanf("%d", &n);
    arr = (float*)calloc(n , sizeof(float));
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%f ", arr[i]);
    }
    printf("\n");
    free(arr);
}