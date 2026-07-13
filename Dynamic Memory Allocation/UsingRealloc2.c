#include<stdio.h>
#include<stdlib.h>
int main() {
	int *arr, size, newSize, *temp;
	printf("Enter the no of elements to be entered:\n");
	scanf("%d", &size);
	arr = (int*) malloc(size * sizeof(int));

	if(arr == NULL){
		printf("Memory allocation failed for arr");
		return 1;
	}
	printf("\nEnter %d elements:\n", size);
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("\n%d Entered numbers are:\n", size);
	for(int i = 0; i < size; i++){
		printf("%d, ", arr[i]);
	}
	
	printf("\nEnter the new size:\n");
	scanf("%d", &newSize);
	
	temp = (int*) realloc(arr, newSize * sizeof(int));
	if(temp == NULL){
		printf("Memory allocation failed for temp");
		free(arr);
		return 1;
	}
	
	arr = temp;

	printf("\nEnter new %d elements:\n", (newSize - size));
	for(int i = size; i < newSize; i++){
		scanf("%d", &arr[i]);
	}

	printf("\n%d Entered numbers are:\n", newSize);
	for(int i = 0; i < newSize; i++){
		printf("%d, ", arr[i]);
	}
	
	free(arr);
	free(temp);
	return 0;
}