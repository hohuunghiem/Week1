#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	cout << "Enter a and b ";int a, b;
	cin >> a >> b;
	cout << add(a, b);
	return 0;
}