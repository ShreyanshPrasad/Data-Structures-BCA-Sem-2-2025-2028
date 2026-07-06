//This code will give error.
#include<stdio.h>
//#define SIZE 5
int main() {
	const int size = 5;
	int arr[size] = {10, 20, 30, 40, 50};
	
	for(int i = 0; i < size; i++)
		printf("%d, ", arr[i]);
	
	return 0;
}