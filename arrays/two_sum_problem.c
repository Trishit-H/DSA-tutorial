// Problem: Find two numbers in an array that add up to a target sum
// Note: Use two pointer technique
// Assumption: The array is already sorted in an ascending order

#include <stdio.h>

int main() {
  int arr[] = {2, 7, 11, 15, 20, 28, 36}; // Sorted array
  int target = 35;                        // Target sum

  // Length of the array
  int len = sizeof(arr) / sizeof(arr[0]);

  int left = 0;        // Left pointer (arr[0])
  int right = len - 1; // Right pointer (arr[len - 1])
  int found = 0;       // Flag to check if target sum is reached

  while (left < right) {
    int current_sum = arr[left] + arr[right];

    if (current_sum = target) {
      printf("Two elements found at indices %d and %d\n", left, right);
      printf("Values are: %d and %d\n", arr[left], arr[right]);
      found = 1;
      break;
    } else if (current_sum < target) {
      left++;
    } else {
      right--;
    }
  }

  if (!found) {
    printf("No two elements found with target sum %d\n", target);
  }

  return 0;
}