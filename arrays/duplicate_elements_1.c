// Problem: Remove duplicate elements from a sorted array

#include <stdio.h>

int removeDuplicates(int arr[], int n, int result[]) {
  result[0] = arr[0];
  int x = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] != result[x]) {
      x = x + 1;
      result[x] = arr[i];
    }
  }

  return x + 1; // Number of unique elements
}

int main() {
  int arr[] = {5, 5, 7, 8, 8, 9, 9, 10, 10}; // Original sorted array
  int len = sizeof(arr) / sizeof(arr[0]);    // Size of array

  int result[len]; // Output array to store unique array

  // Print original array
  printf("Original array: ");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  int size = removeDuplicates(arr, len, result); // Size of output array

  // Print result array
  printf("Output array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", result[i]);
  }

  return 0;
}