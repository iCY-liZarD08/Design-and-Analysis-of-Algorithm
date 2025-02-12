#include <iostream>
using namespace std;

int gcd(int h, int i, int &steps) {
    steps++;
    if (i == 0) return h;
    return gcd(i, h % i, steps);
}

int main() {
    int a, b, steps = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD: " << gcd(a, b, steps) << endl;
    cout << "Steps required: " << steps << endl;
    return 0;
}