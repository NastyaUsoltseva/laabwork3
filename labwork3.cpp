#include <stdio.h>
#include <stdlib.h>
#define n 5

int main() {
	int a = 0, b = 0;
	int array[n];
	printf("Enter values of array:\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < n; i++) {
		if (array[i] % 5 == 0 && array[i] % 7 != 0) {
			a += 1;
			b += array[i];
		}
	}
	printf("Count of numbers: %d\n", a);
	printf("Sum of numbers: %d\n", b);
	return(0);
}