#include <stdio.h>

void main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c); 

    int arr[r][c];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("a[%d]", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
    }

    double average = (double)sum / (r * c);
    printf("Average of the 2D array: %.2f\n", average);
}
