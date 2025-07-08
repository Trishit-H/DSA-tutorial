// Problem: Find the 2nd largest element in an array with no duplicates.
// Assumptions: No edge cases.

#include <stdio.h>

int main() {
  int arr[8] = {25, 16, 38, 10, 35, 48, 20, 50};

  int max1; // To store the largest element
  int max2; // To store the 2nd largest element

  // Calculate the length of the array
  int len = sizeof(arr) / sizeof(arr[0]);

  if (arr[0] > arr[1]) {
    max1 = arr[0];
    max2 = arr[1];
  } else {
    max1 = arr[1];
    max2 = arr[0];
  }

  for (int i = 2; i < len; i++) {
    if (arr[i] > max1) {
      max2 = max1;
      max1 = arr[i];
    } else if (arr[i] > max2) {
      max2 = arr[i];
    }
  }

  printf("Array elements: ");
  for (int i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");

  printf("The largest element in the array is: %d\n", max1);
  printf("The second largest element in the array is: %d\n", max2);

  return 0;
}