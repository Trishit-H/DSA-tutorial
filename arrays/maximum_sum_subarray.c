// Problem: Find the maximum sum of any subarray of size w using brute force
// Note: This method uses the brute force way and not sliding window technique

#include <math.h>
#include <stdio.h>

int main() {
  int arr[] = {3, 8, 2, 5, 7, 6, 12};
  int len = sizeof(arr) / sizeof(arr[0]); // Length of the array
  int w = 4;                              // Size of the fixed subarray
  int current; // Variable to store the sum of current subarray

  double maxx = -INFINITY;

  for (int i = 0; i <= len - w; i++) {
    current = 0;
    for (int j = i; j <= i + w - 1; j++) {
      current = current + arr[j];
    }

    if (current > maxx) {
      maxx = current;
    }
  }

  printf("Maximum subarray sum of size %d is %.1f\n", w, maxx);

  return 0;
}