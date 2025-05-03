#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    int *arr;
    printf("Enter size od array: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter %d index value: ", i);
        scanf("%d", &arr[i]);
    }
    int a;
    printf("Enter new size of array: ");
    scanf("%d", &a);
    int *temp = (int*)realloc(arr,sizeof(int));

    for(int i = n; i < a; i++){
        printf("Enter index value of new array: ");
        scanf("%d ", &temp[i]);
    }
    for(int i = n; i < a; i++){
        printf("%d ", temp[i]);
    }
    printf("\n");
    free(arr);
    free(temp);
}