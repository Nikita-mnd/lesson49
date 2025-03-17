#include <iostream>
using namespace std;

int number_of_rows(int** array, int n, int m) {

	int num = 0;
	for (int i = 0; i < n; i++) {
		int pos = 0;
		int neg = 0;
		for (int j = 0; j < m; j++) {
			if (array[i][j] < 0) {
				neg++;
			}
			else if(array[i][j] > 0){
				pos++;
			}
		}
		if (pos > neg) {
			num++;
		}
	}
}