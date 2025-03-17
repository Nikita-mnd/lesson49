#include <iostream>
using namespace std;
double arithmetic_mean(int** array, int n, int m);
int main() {
	cout << "input n and m: ";
	int n, m;
	cin>>n>>m;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		*array = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array[i][j];
		}
	}
	cout << arithmetic_mean(array, n, m) << endl;
	return 0;
}