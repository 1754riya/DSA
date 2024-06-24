#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = n - 1;
    int key = 4;
    
    // Shift elements to the right until the correct position for key is found
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    // Insert the key at the correct position
    arr[i + 1] = key;

    printf("Insert: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
