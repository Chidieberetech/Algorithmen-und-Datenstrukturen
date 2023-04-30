#include <algorithm>
#include <iostream>

using namespace std;

int partition(int* arr, int left, int right)
{
	int i = left;
	int pivot_value = arr[right];
	for (int j = left; j < right; j++)
	{
		if (arr[j] <= pivot_value)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[right]);
	return i;
}

void quicksort(int* arr, int left, int right)
{
	if (left < right)
	{
		int pivot = partition(arr, left, right);
		quicksort(arr, left, pivot - 1);
		quicksort(arr, pivot + 1, right);
	}
}

void print(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main(void)
{
	int arr[] = { 5,2,60,52,10,1,33,22,11,9,12,12,12 };

	int size = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, size - 1);
	print(arr, size);
	return 0;
}