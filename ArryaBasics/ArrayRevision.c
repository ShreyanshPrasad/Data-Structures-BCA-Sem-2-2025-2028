#include<stdio.h>
int main() {
	int marks[10], sum = 0;
	printf("Enter marks of 10 students:\n");
	for(int i = 0; i < 10; i++) {
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	
	printf("Total marks: %d", sum);
	printf("\nAverage marks: %d", sum/10);
	return 0;
}