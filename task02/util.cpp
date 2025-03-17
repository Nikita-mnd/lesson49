#include "main.h"
string convert(int** array, int m, int n) {
	string s = "";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			s += to_string(array[i][j]);
		}
	}
	return s;
}