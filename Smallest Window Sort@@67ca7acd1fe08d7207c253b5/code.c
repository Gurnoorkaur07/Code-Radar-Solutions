#include <stdio.h>
#include <limits.h>

int findUnsortedSubarray(int arr[], int n) {
    int s = 0, e = n - 1;

    // Find first element which is greater than next
    while (s < n - 1 && arr[s] <= arr[s + 1]) {
        s++;
    }
    if (s == n - 1) return 0; // Already sorted

    // Find last element which is smaller than previous
    while (e > 0 && arr[e] >= arr[e - 1]) {
        e--;
    }

    // Find min and max in the unsorted subarray
    int min = arr[s], max = arr[s];
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand s to the left
    while (s > 0 && arr[s - 1] > min) {
        s--;
    }

    // Expand e to the right
    while (e < n - 1 && arr[e + 1] < max) {
        e++;
    }

    return e - s + 1;
}
