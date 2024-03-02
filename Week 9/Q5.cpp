#include <iostream>

void displayArray(int arr[], int size, int index) {
    if (index == size) {
        return; // Base case: stop when the index reaches the size
    }
    std::cout << arr[index] << " "; // Display the current element
    displayArray(arr, size, index + 1); // Recursively display the next element
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements using recursion: ";
    displayArray(arr, size, 0);

    return 0;
}

