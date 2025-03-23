#include <iostream>
using namespace std;

bool isSorted(int* arr, int n) {
	 if (n == 1 || n == 0)
		 return true;
	
		if (arr[0] > arr[1])
		return false;
	
		return isSorted(arr + 1, n - 1);
}
int main() {
	int n = 5;
	int* arr = new int[n];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	if (isSorted(arr, n))
		cout << "The array is sorted.\n";
	else
		cout << "The array is NOT sorted.\n";
	return 0;
}