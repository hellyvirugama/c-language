#include <stdio.h>

void Even(int *arr, int size) {
    printf("Even numbers:\n");
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d\n", *(arr + i));
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    Even(arr, size);

}
