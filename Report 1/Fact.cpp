#include <iostream>
using namespace std;

int factorial(int n, int &steps) {
    steps++;
    if (n == 0) return 1;
    return n * factorial(n - 1, steps);
}

int main() {
    int n, steps = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial: " << factorial(n, steps) << endl;
    cout << "Steps required: " << steps << endl;
    return 0;
}