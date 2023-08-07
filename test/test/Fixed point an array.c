#include <stdio.h>

int findFixedPoint(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == mid) {
            return mid;
        } else if (arr[mid] < mid) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int arr[] = {-10, -5, 0, 3, 7, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int fixedPoint = findFixedPoint(arr, size);
    if (fixedPoint != -1) {
        printf("Fixed point found at index %d, value: %d\n", fixedPoint, arr[fixedPoint]);
    } else {
        printf("No fixed point found in the array.\n");
    }

    return 0;
}

