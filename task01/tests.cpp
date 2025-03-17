#include <iostream>
using namespace std;
string convert(int** array, int n, int m);
double arithmetic_mean(int** array, int n, int m);
void print(int** array, int n, int m, bool result) {

	cout << convert(array, n, m) << "\n result: " <<
		(result == true ? "Pass." : "Fail.");

}

void test01() {
	int n = 2;
	int m = 3;
	int** array = new int*[n];
	for(int i = 0;i < n; i++){
		*array = new int[m];
	}
	array = {
		{1,2,3},
		{7,8,9},
	};
	bool expected = 5.0;
	bool actual = arithmetic_mean(array, n, m);
	cout << actual << endl;
	print(array, n, m, expected == actual);
}