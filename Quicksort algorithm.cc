//***** Gruppe 8 Quick-sorting assignment in C++

#include  "iostream"

using namespace std;

//***** interchanging the element
void swap(int *g, int *h) 
{ int t = *g; *g = *h; *h = t; }

//***** Output of  the array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}


int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {

      i++;
      
      swap(&array[i], &array[j]);
    }
  }
  
  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
      
    int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);

    
    quickSort(array, pi + 1, high);
  }
}

//***** main function/script that uses the algorithm with different inputs.
int main() {
  int data[] = {9, 12, 11, 10, 14, 16, 13};
  int n = sizeof(data) / sizeof(data[0]);

  cout << R"(This the Unsorted Array: 
)";
  printArray(data, n);
  
  //***** making quicksort on inputed data
  quickSort(data, 0, n - 1);

  cout << R"(Eureka the Sorted array: 
)";
  printArray(data, n);
}