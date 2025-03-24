#include <iostream>
using namespace std;
int findSmallest(int arr[], int size) { 
    int min_value = arr[0];
    for (int i = 1; i < size; i++) {
       
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    return min_value;
}
int main() {
    int arr[] = {5, 3, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = findSmallest(arr, size);
    cout << "The smallest number in the array is: " << smallest << endl;
    return 0;
}