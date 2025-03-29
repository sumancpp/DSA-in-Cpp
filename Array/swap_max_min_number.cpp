//WAF to swap the max and min number of an array
#include<iostream>
using namespace std;
void swap(int arr[], int size) {
    if (size <= 1) return; 
    int maxIdx = 0, minIdx = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }
    int temp = arr[maxIdx];
    arr[maxIdx] = arr[minIdx];
    arr[minIdx] = temp;
}
int main(){
 int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The original array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swap(arr, size);

    cout << "After swapping max and min: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
            
      return 0;
    }