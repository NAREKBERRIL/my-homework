#include <stdio.h>
#include <stdlib.h>

int main()
{	int n;
	scanf("%d", &n);
	int *p = (int*)malloc(n*sizeof(int));
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(p);
}