#include<stdio.h>
int main() {
	int num[10], even[10], odd[10], countEven = 0, countOdd = 0;
	printf("Enter 10 numbers: \n");
	for(int i = 0; i < 10; i++){
		scanf("%d", &num[i]);
		
		if(num[i] % 2 == 0)
			even[countEven++] = num[i];
		else
			odd[countOdd++] = num[i];
	}
	
	printf("There are total %d Even numbers, & they are: \n", countEven);
	for(int i = 0; i < countEven; i++)
		printf("%d, ", even[i]);

	printf("\nThere are total %d Odd numbers, & they are: \n", countOdd);
	for(int i = 0; i < countOdd; i++)
		printf("%d, ", odd[i]);

	return 0;
}