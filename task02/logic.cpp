#include "main.h"

int sum_of_elements(int** array, int n) {

	int sum = 0;
	for (int i = 0; i <= n;i++) {
		sum += array[i][i] + array[i][n - 1 - i];
	}
	return sum;
}