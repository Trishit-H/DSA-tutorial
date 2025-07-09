// Problem: Remove duplicate elements from a sorted array
// Note: This approach has a time complexity of O(n)
// space complexity of O(1)

#include <stdio.h>

int main() {
  int arr[] = {5, 5, 7, 8, 8, 9, 9, 10, 10}; // Orignal sorted array
  int len = sizeof(arr) / sizeof(arr[0]);    // Length of array

  int x = 0;

  // Print original array
  printf("Original array: ");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  for (int i = 0; i < len; i++) {
    if (arr[i] != arr[x]) {
      x = x + 1;
      arr[x] = arr[i];
    }
  }

  // Print unique array
  printf("Result array: ");
  for (int i = 0; i <= x; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}