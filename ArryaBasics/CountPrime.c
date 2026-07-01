#include<stdio.h>

int isPrime(int no) {
	if(no < 2)
		return 0;
	else{
		for(int i = 2; i < no/2; i++){
			if(no % i == 0)
				return 0;
		}
	}
	return 1;
}

int main() {
	int arr[10], prime[10], nonPrime[10], countPrime = 0, countNonPrime = 0;
	printf("Enter 10 numbers: \n");
	for(int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);

		if(isPrime(arr[i]))
			prime[countPrime++] = arr[i];
		else
			nonPrime[countNonPrime++] = arr[i];
	}

	printf("\nThere are total %d prime numbers, they are: \n", countPrime);
	for(int i = 0; i < countPrime; i++)
		printf("%d, ", prime[i]);

	printf("\nThere are total %d non prime numbers, they are: \n", countNonPrime);
	for(int i = 0; i < countNonPrime; i++)
		printf("%d, ", nonPrime[i]);

	return 0;
}