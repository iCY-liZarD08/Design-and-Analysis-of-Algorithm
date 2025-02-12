#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int &steps) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            steps++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);//builtint function to swap two numbers
            }
        }
    }
}

int main() {
    int n, steps = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    bubbleSort(arr, n, steps);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nSteps required: " << steps << endl;
    return 0;
}