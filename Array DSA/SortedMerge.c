#include <stdio.h>

int main() {
    int arr1[] = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    int n1 = sizeof arr1 / sizeof arr1[0];
    int arr2[] = {2, 1, 4, 3, 9, 6};
    int n2 = sizeof arr2 / sizeof arr2[0];
    int mergedsize = n1 + n2;
    int merged[mergedsize];

    // Copy elements from arr1 to merged
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from arr2 to merged
    for (int i = 0; i < n2; i++) {
        merged[i + n1] = arr2[i];
    }

    // Sort the merged array using bubble sort
    for (int i = 0; i < mergedsize - 1; i++) {
        for (int j = 0; j < mergedsize - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    // Print the merged and sorted array
    printf("Merged: ");
    for (int i = 0; i < mergedsize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
