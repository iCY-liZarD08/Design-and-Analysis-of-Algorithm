#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int &steps) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            steps++;
            arr[j + 1] = arr[j];
            j--;
        }
        steps++;
        arr[j + 1] = key;
    }
}

int main() {
    int n, steps = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    insertionSort(arr, n, steps);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nSteps required: " << steps << endl;
    return 0;
}