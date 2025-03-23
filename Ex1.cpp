#include <iostream>
using namespace std;

int fibonacci(int n, int cur = 0, int nex = 1) {
    if (n == 0) return 0;

    cout << cur << " ";

    return fibonacci(n-1, nex, cur + nex);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    fibonacci(n);

    return 0;
}