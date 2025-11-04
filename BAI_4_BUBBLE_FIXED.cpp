#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter number of elements:");
    scanf("%d", &n);
    //phan de nhap mang
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    // duoi day la bubble sort
    for (int i = 0; i < n - 1; i++) {              // lap qua tung phan tu
        for (int j = 0; j < n - i - 1; j++) {      // So tung cap
            if (arr[j] > arr[j + 1]) {             // sai thi doi
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Output
    printf("\nArray after sorting in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
