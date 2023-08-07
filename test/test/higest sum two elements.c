#include <stdio.h>

   int findMaxSum(int arr[], int n) {
    if (n < 2) {
        printf("At least two elements are required in the array.\n");
        return 0;
    }

    int max1 = arr[0]; 
    int max2 = arr[1]; 
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    return max1 + max2;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMaxSum(arr, n);
    printf("The highest sum achieved from two elements is: %d\n", result);

    return 0;
}
