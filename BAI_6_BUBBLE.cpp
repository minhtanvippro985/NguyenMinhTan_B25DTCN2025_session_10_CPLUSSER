#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int swapped;
//-------------------- nhap size----------
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // ------------- nhap phan tumang----------
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //-----------------bb sort -----------
    for (int i = 0; i < n - 1; i++) {
        swapped = 0; // reset flag
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // flag thanh true
            }
        }

        // neu khong doi cho nua thi break luon
        if (swapped == 0) {
            break;
        }
    }

    // -----------------------  IN KET QUA
    printf("\nArray after sorting in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
