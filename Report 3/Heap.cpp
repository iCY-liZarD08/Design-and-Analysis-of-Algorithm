#include<iostream>
using namespace std;

int step = 0;

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
    step++;
}

void heapify(int A[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    step++;

    if (left < n && A[left] > A[largest])
        largest = left;

    if (right < n && A[right] > A[largest])
        largest = right;

    if (largest != i) {
        swap(A[i], A[largest]);
        heapify(A, n, largest);
        step++;
    }
    step++;
}

void heapSort(int A[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(A, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(A[0], A[i]);
        heapify(A, i, 0);
        step++;
    }
    step++;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    step++;

    int A[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        step++;
    }

    heapSort(A, n);
    step++;

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << "  ";
        step++;
    }

    cout << "\nTotal number of steps: " << step << endl;

    return 0;
}