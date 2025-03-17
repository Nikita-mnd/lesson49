#include <iostream>
using namespace std;
int sum_of_elements(int** array, int n);
int main() {
	cout << "input n: ";
	int n;
	cin >> n;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> array[i][j];//
		}
	}
	int sum = sum_of_elements(array, n);
	cout << sum << endl;
	return 0;
}