#include <stdio.h>
#include <stdlib.h>
int main() {
	int rows, cols,**matrix;
	
	printf("Enter value of rows: ");
	scanf("%d", &rows);
	printf("Enter value of cols: ");
	scanf("%d", &cols);

	matrix = (int**) malloc(rows * sizeof(int*));
	if (matrix == NULL) { 
		printf("Memory allocation failed.!");
		return 1; 
	}
	
	for (int i = 0; i < rows; i++) {
		matrix[i] = (int*) malloc(cols * sizeof(int));
		if (matrix[i] == NULL) {
			printf("Memory allocation failed.!");
			return 1; 
		}
	}
	
	printf("Enter the elements:\n");
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			scanf("%d", &matrix[i][j]);

	// Print the matrix
	printf("Enterend Matrix is:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			printf("%4d", matrix[i][j]);
		printf("\n");
	}

	// Freeing -- REVERSE order: free rows first, then the pointer array
	for (int i = 0; i < rows; i++){
		free(matrix[i]); // free each row
		matrix[i] = NULL;
	}
	free(matrix); // free the array of row pointers
	matrix = NULL;
	return 0;
}