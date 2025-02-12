#include <iostream>
using namespace std;

int fibo(int n, int &steps) {
    steps++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1, steps) + fibo(n - 2, steps);
}

int main() {
    int n, steps = 0;
    cout << "Enter the position (n): ";
    cin >> n;
    cout << "Fibonacci term: " << fibo(n, steps) << endl;
    cout << "Steps required: " << steps << endl;
    return 0;
}
 