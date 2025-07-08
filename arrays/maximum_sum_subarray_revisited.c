// Problem: Find the maximum sum of any subarray of size w using sliding window
// technique. Note: This method uses the sliding window technique way.

#include <stdio.h>

int main() {
  int arr[] = {3, 8, 2, 5, 7, 6, 12};
  int len = sizeof(arr) / sizeof(arr[0]); // Length of the array
  int w = 4;                              // Fixed window size of 4
  int current = 0;                        // Stores the current subarray sum

  for (int i = 0; i < w; i++) {
    current = current + arr[i];
  }

  int maxx =
      current; // Stores the maximum sum subarray. Set to sum of first subarray
  for (int i = 1; i <= len - w; i++) {
    current = current - arr[i - 1] + arr[i + w - 1];
    if (current > maxx) {
      maxx = current;
    }
  }

  printf("Maximum subarray sum of size %d is %d\n", w, maxx);

  return 0;
}