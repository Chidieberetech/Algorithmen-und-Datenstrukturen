//Sorted array in ascending order
#include <iostream>
#include <vector>

using namespace std;

void quicksort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int pivot = arr[(left + right) / 2];
    int i = left, j = right;

    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    quicksort(arr, left, j);
    quicksort(arr, i, right);
}

int main() {
    vector<int> arr1 = {5, 2, 9, 1, 5, 6, 3};
    quicksort(arr1, 0, arr1.size() - 1);
    for (int x : arr1) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> arr2 = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    quicksort(arr2, 0, arr2.size() - 1);
    for (int x : arr2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
