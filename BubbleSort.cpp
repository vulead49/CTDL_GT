#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // hoan doi cac gia tri cua arr[i] va arr[i+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ham in ra cac phan tu cua mang
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 4, 2, 7, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}

