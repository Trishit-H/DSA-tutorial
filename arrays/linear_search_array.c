// Problem: Find a given item in an array using Linear Search

#include <stdio.h>

int linear_search(int arr[], int n, int item) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == item) {
      return i;
    }
  }

  return -1;
}

int main() {
  int arr[] = {29, 75, 64, 22, 2, 95, 1};
  int len = sizeof(arr) / sizeof(arr[0]); // Length of the array

  int item = 22;     // Item to search in the array
  int location = -1; // Variable to store the location of the index

  location = linear_search(arr, len, item);

  if (location != -1) {
    printf("Item found at index: %d\n", location);
  } else {
    printf("Item not found in the array\n");
  }

  return 0;
}