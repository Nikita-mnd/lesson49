#include "util.h"
#include "logic.h"
void print(int** array, int n, bool result) {

	cout << convert(array, n, n) << "\n result: " <<
		(result == true ? "Pass." : "Fail.");

}

void test01() {
	int n = 2;
	int array[][] = {
		{2,3,4},
		{3,4,5},
		{4,5,6},
	};
	int expected = 5.0;
	int actual = sum_of_elements(array, n);
	cout << actual << endl;
	print(array, n, expected == actual);
}