#include<iostream>
using namespace std;

int step = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    step++;
}

int partition(int A[], int low, int high) {
    int pivot = A[high];
    int i = (low - 1);
    step++;

    for (int j = low; j < high; j++) {
        if (A[j] <= pivot) {
            i++;
            swap(&A[i], &A[j]);
        }
        step++;
    }

    swap(&A[i + 1], &A[high]);
    step++;

    return (i + 1);
}

void quickSort(int A[], int low, int high) {
    if (low < high) {
        step++;
        int pi = partition(A, low, high);
        quickSort(A, low, pi - 1);
        quickSort(A, pi + 1, high);
        step++;
    }
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

    quickSort(A, 0, n - 1);
    step++;

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << "  ";
        step++;
    }

    cout << "\nTotal number of steps: " << step << endl;

    return 0;
}