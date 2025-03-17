#include <iostream>
using namespace std;

double arithmetic_mean(int** array, int n, int m) {

	int sum = 0;
	int zero = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (0 != array[i][j]) {
				sum += array[i][j];
			}
			else {
				zero++;
			}
		}
	}
	return sum / (m * n - zero);
}