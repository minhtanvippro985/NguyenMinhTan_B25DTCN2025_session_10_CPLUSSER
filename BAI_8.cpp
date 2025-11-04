#include <stdio.h>

int main() {
    int n, x;
    int arr[100];

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // ---------------- Bubble Sort ----------------
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break; 
    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nNhap phan tu can tim: ");
    scanf("%d", &x);

    int left = 0, right = n - 1;
    int found = -1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1)
        printf("\nChi so cua phan tu can tim: %d\n", found);
    else
        printf("\nKhong tim thay phan tu trong mang.\n");

    return 0;
}
