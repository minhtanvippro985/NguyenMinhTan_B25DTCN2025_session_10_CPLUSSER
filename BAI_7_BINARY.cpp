#include <stdio.h>

int main() {
    int n, x;
    int arr[100];

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    // Nhap mang da duoc sap xep tang dan
    printf("Nhap cac phan tu (theo thu tu tang dan):\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int left = 0;
    int right = n - 1;
    int found = -1; 
    // ---------- NHI PHAN----------
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

    // ----------ketqua----------
    if (found != -1) {
        printf("\nPhan tu %d duoc tim thay tai vi tri arr[%d].\n", x, found);
    } else {
        printf("\nKhong tim thay phan tu %d trong mang.\n", x);
    }

    return 0;
}
