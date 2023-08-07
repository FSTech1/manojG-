#include <stdio.h>
int findEquilibrium(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];

        if (leftSum == totalSum) {
            return i; 
        }
        leftSum += arr[i];
    }

    return -1; 
}
int main() {
    int arr[] = {1, 2, 3, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int equilibriumIndex = findEquilibrium(arr, n);
    if (equilibriumIndex != -1) {
        printf("Equilibrium point found at index %d\n", equilibriumIndex);
    } else {
        printf("No equilibrium point found in the array.\n");
    }

    return 0;
}

