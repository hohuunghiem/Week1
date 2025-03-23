#include <iostream>
using namespace std;

int fibonacci(int n, int cur = 0, int nex  = 1) {
    if (cur == n) return 0;

    cout << cur << " ";

    return fibonacci(n, nex, cur + nex ); 
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    fibonacci(n); 

    return 0;
}
