// Problem: Search for an element in an array using Binary Search
// Assumption: The array is sorted

#include <stdio.h>

int binary_search(int arr[], int n, int item) {
  int start = 0;
  int end = n - 1;
  int mid;

  while (start <= end) {
    mid = (start + end) / 2;

    if (arr[mid] == item) {
      return mid;
    } else if (arr[mid] < item) {
      start = mid + 1;
    } else if (arr[mid] > item) {
      end = mid - 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {24, 36, 39, 47, 78, 87, 92, 112, 156};
  int len = sizeof(arr) / sizeof(arr[0]); // Length of the array

  int item = 92;     // Item to search for in the array
  int location = -1; // Variable to store index of searched item

  location = binary_search(arr, len, item);

  if (location != -1) {
    printf("Item found at index %d\n", location);
  } else {
    printf("Item not found\n");
  }

  return 0;
}